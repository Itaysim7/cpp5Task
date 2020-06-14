#pragma once

namespace itertools 
{

    template  <typename T,typename F>
    class compress 
    {
        T container;
        F containerBool;
        public:
                compress (T con1,F con2)  : container(con1), containerBool(con2) {}
                class iterator  
                {
                    typename T::iterator bIter;
                    typename T::iterator eIter;
                    typename F::iterator bIterBool;
                    typename F::iterator eIterBool;

                public:
                        iterator(typename T::iterator start1, typename T::iterator end1,typename F::iterator start2, typename F::iterator end2) : bIter(start1), eIter(end1),bIterBool(start2), eIterBool(end2) {}
                        auto operator*() 
                        {
                             while(bIter!=eIter&&!*bIterBool)
                                ++(*this);
                            return *bIter;
                        }
                        iterator &operator++()
                        {
                            ++bIter;
                            ++bIterBool;
                            while(bIter!=eIter&&!*bIterBool)
                            {
                                ++bIter;
                                ++bIterBool;
                            }
                            return *this;
                        }
                        iterator operator++(int) 
                        {
                            iterator copyIndex=*this;
                            ++bIter;
                            ++bIterBool;
                            while(bIter!=eIter&&!*bIterBool)
                            {
                                ++bIter;
                                ++bIterBool;
                            }
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
                iterator begin() {return iterator  (container.begin(),container.end(),containerBool.begin(),containerBool.end());}
                iterator end() { return iterator (container.end(),container.end(),containerBool.end(),containerBool.end()); }

    }; //class compress
    
}//namespace itertools 
