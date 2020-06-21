#pragma once

namespace itertools 
{
    typedef struct 
    {
        template <typename P>
        P operator ()(P a, P b) const
        {
            return a+b;
        }
    }plus;
    
    
    template  <typename T,typename F=plus>
    class accumulate 
    {
        T container;
        F func;
        typedef typename T::value_type value_type;
        public:
                accumulate (T con,F f=plus()) : container(con), func(f) {}
                
                class iterator  
                {
                    typename T::iterator bIter;
                    typename T::iterator eIter;
                    typename T:: value_type result;
                    F func;
                    
                    
                public:
                        iterator(typename T::iterator start, typename T::iterator end, F f) : bIter(start), eIter(end), func(f), result(*bIter){}
                        auto operator*() const {return result;}
                        iterator &operator++()
                        {
                            ++bIter;
                            if(bIter!=eIter)
                                result=func(result,*bIter);
                            return *this;
                        }
                        iterator operator++(int) 
                        {
                            iterator copyIndex=*this;
                            ++bIter;
                            if(bIter!=eIter)
                                result=func(result,*bIter);
                            return copyIndex;
                        }
                        iterator& operator=(const iterator& other) 
                        {
                            if (*this != other)
                            {
                                this->eIter = other.eIter;
                                this->result = other.result;
                                this->bIter = other.bIter;
                                this->func = other.func;
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

    }; //class accumulate
    
}//namespace itertools 
