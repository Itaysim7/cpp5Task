#pragma once

namespace itertools 
{

    template  <typename T,typename F>
    class filterfalse 
    {
        T container;
        F func;
        public:
                filterfalse (F f,T con)  : container(con), func(f) {}
                class iterator  
                {
                    typename T::iterator bIter;
                    typename T::iterator eIter;
                    F func;
                    
                public:
                        iterator(typename T::iterator start, typename T::iterator end, F f) : bIter(start), eIter(end), func(f){}
                        auto operator*() 
                        {
                             while(func(*bIter))
                                ++(*this);
                            return *bIter;
                        }
                        const iterator &operator++()
                        {
                            ++bIter;
                            while(bIter!=eIter&&func(*bIter))
                                ++bIter;
                            return *this;
                        }
                        iterator operator++(int) 
                        {
                            iterator copyIndex=*this;
                            ++bIter;
                           while(bIter!=eIter&&func(*bIter))
                                ++bIter;
                            return copyIndex;
                        }
                        iterator& operator=(const iterator& other)
                        {
                            if (*this != other)
                            {
                                    this->eIter=other.eIter;
                                    this->bIter=other.bIter;
                                    this->func=other.func;
                            }
                            return *this;
                        }
                        bool operator==(const iterator &other) const 
                        {
                            if(other.bIter==bIter)
                                return true;
                            return false;
                        }
                        bool operator!=(const iterator &other) const 
                        {
                            if(other.bIter!=bIter)
                                return true;
                            return false;
                        }
                };//class iterator
                iterator begin() {return iterator  (container.begin(),container.end(),func);}
                iterator end() { return iterator (container.end(),container.end(),func); }

    }; //class filterfalse
    
}//namespace itertools 
