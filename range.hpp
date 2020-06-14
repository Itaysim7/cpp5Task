#pragma once

namespace itertools 
{
    class range
    {
        public:
                class iterator 
                {
                    friend class range;
                    public:
                            int operator*() const {return index;}
                            const iterator &operator++() {++index;return *this;}
                            iterator operator++(int) 
                            {
                                iterator copyIndex(*this);
                                ++index;
                                return copyIndex;
                            }
                            bool operator==(const iterator &other) const 
                            {
                                if(other.index==index)
                                    return true;
                                return false;
                            }
                            bool operator!=(const iterator &other) const 
                            {
                                if(other.index!=index)
                                    return true;
                                return false;
                            }
                    protected:
                            iterator(int start) : index(start) {}
                    private:
                            int index;
                };//class iterator
                iterator begin() const {return beginR;}
                iterator end() const {return endR;}
                range(int begin, int end) : beginR(begin), endR(end) {}
        private:
                iterator beginR;
                iterator endR; 
    }; //class range
    
}//namespace itertools 
