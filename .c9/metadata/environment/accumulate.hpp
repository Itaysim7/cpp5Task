{"filter":false,"title":"accumulate.hpp","tooltip":"/accumulate.hpp","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":26,"column":20},"end":{"row":27,"column":95},"action":"insert","lines":["                        iterator(typename T::iterator start, typename T::iterator end, F f) ","                                : inner_iter(start), end_iter(end), func(f), sum(*inner_iter){}"],"id":397}],[{"start":{"row":26,"column":40},"end":{"row":26,"column":44},"action":"remove","lines":["    "],"id":398},{"start":{"row":26,"column":36},"end":{"row":26,"column":40},"action":"remove","lines":["    "]},{"start":{"row":26,"column":32},"end":{"row":26,"column":36},"action":"remove","lines":["    "]},{"start":{"row":26,"column":28},"end":{"row":26,"column":32},"action":"remove","lines":["    "]}],[{"start":{"row":27,"column":28},"end":{"row":27,"column":32},"action":"remove","lines":["    "],"id":399},{"start":{"row":27,"column":24},"end":{"row":27,"column":28},"action":"remove","lines":["    "]},{"start":{"row":27,"column":20},"end":{"row":27,"column":24},"action":"remove","lines":["    "]},{"start":{"row":27,"column":16},"end":{"row":27,"column":20},"action":"remove","lines":["    "]},{"start":{"row":27,"column":12},"end":{"row":27,"column":16},"action":"remove","lines":["    "]},{"start":{"row":27,"column":8},"end":{"row":27,"column":12},"action":"remove","lines":["    "]},{"start":{"row":27,"column":4},"end":{"row":27,"column":8},"action":"remove","lines":["    "]}],[{"start":{"row":27,"column":0},"end":{"row":27,"column":4},"action":"remove","lines":["    "],"id":400},{"start":{"row":26,"column":96},"end":{"row":27,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":26,"column":98},"end":{"row":26,"column":108},"action":"remove","lines":["inner_iter"],"id":401},{"start":{"row":26,"column":98},"end":{"row":26,"column":103},"action":"insert","lines":["bIter"]}],[{"start":{"row":26,"column":112},"end":{"row":26,"column":120},"action":"remove","lines":["end_iter"],"id":402},{"start":{"row":26,"column":112},"end":{"row":26,"column":117},"action":"insert","lines":["eIter"]}],[{"start":{"row":26,"column":138},"end":{"row":26,"column":148},"action":"remove","lines":["inner_iter"],"id":403},{"start":{"row":26,"column":138},"end":{"row":26,"column":143},"action":"insert","lines":["eIter"]}],[{"start":{"row":26,"column":138},"end":{"row":26,"column":143},"action":"remove","lines":["eIter"],"id":404},{"start":{"row":26,"column":138},"end":{"row":26,"column":143},"action":"insert","lines":["bIter"]}],[{"start":{"row":26,"column":133},"end":{"row":26,"column":136},"action":"remove","lines":["sum"],"id":405},{"start":{"row":26,"column":133},"end":{"row":26,"column":139},"action":"insert","lines":["result"]}],[{"start":{"row":13,"column":10},"end":{"row":13,"column":20},"action":"remove","lines":["accumulate"],"id":406},{"start":{"row":13,"column":10},"end":{"row":13,"column":21},"action":"insert","lines":["accumulate "]}],[{"start":{"row":18,"column":16},"end":{"row":18,"column":26},"action":"remove","lines":["accumulate"],"id":407},{"start":{"row":18,"column":16},"end":{"row":18,"column":27},"action":"insert","lines":["accumulate "]}],[{"start":{"row":18,"column":51},"end":{"row":18,"column":60},"action":"remove","lines":["container"],"id":409},{"start":{"row":18,"column":51},"end":{"row":18,"column":60},"action":"insert","lines":["container"]}],[{"start":{"row":18,"column":77},"end":{"row":19,"column":0},"action":"insert","lines":["",""],"id":410},{"start":{"row":19,"column":0},"end":{"row":19,"column":16},"action":"insert","lines":["                "]}],[{"start":{"row":18,"column":72},"end":{"row":18,"column":73},"action":"remove","lines":["f"],"id":411},{"start":{"row":18,"column":72},"end":{"row":18,"column":76},"action":"insert","lines":["plus"]}],[{"start":{"row":18,"column":76},"end":{"row":18,"column":78},"action":"insert","lines":["()"],"id":412}],[{"start":{"row":18,"column":46},"end":{"row":18,"column":47},"action":"remove","lines":[")"],"id":413},{"start":{"row":18,"column":45},"end":{"row":18,"column":47},"action":"remove","lines":["()"]},{"start":{"row":18,"column":44},"end":{"row":18,"column":45},"action":"remove","lines":["s"]},{"start":{"row":18,"column":43},"end":{"row":18,"column":44},"action":"remove","lines":["u"]},{"start":{"row":18,"column":42},"end":{"row":18,"column":43},"action":"remove","lines":["l"]},{"start":{"row":18,"column":41},"end":{"row":18,"column":42},"action":"remove","lines":["p"]},{"start":{"row":18,"column":40},"end":{"row":18,"column":41},"action":"remove","lines":[" "]},{"start":{"row":18,"column":39},"end":{"row":18,"column":40},"action":"remove","lines":["="]},{"start":{"row":18,"column":38},"end":{"row":18,"column":39},"action":"remove","lines":[" "]},{"start":{"row":18,"column":37},"end":{"row":18,"column":38},"action":"remove","lines":["f"]},{"start":{"row":18,"column":36},"end":{"row":18,"column":37},"action":"remove","lines":[" "]}],[{"start":{"row":18,"column":35},"end":{"row":18,"column":36},"action":"remove","lines":["F"],"id":414},{"start":{"row":18,"column":34},"end":{"row":18,"column":35},"action":"remove","lines":[" "]},{"start":{"row":18,"column":33},"end":{"row":18,"column":34},"action":"remove","lines":[","]}],[{"start":{"row":18,"column":33},"end":{"row":18,"column":34},"action":"insert","lines":[")"],"id":415}],[{"start":{"row":19,"column":16},"end":{"row":20,"column":0},"action":"insert","lines":["                accumulate (T con) : container(con), func(plus()) {}",""],"id":416}],[{"start":{"row":19,"column":28},"end":{"row":19,"column":32},"action":"remove","lines":["    "],"id":417},{"start":{"row":19,"column":24},"end":{"row":19,"column":28},"action":"remove","lines":["    "]},{"start":{"row":19,"column":20},"end":{"row":19,"column":24},"action":"remove","lines":["    "]},{"start":{"row":19,"column":16},"end":{"row":19,"column":20},"action":"remove","lines":["    "]}],[{"start":{"row":19,"column":33},"end":{"row":19,"column":34},"action":"insert","lines":[","],"id":418},{"start":{"row":19,"column":34},"end":{"row":19,"column":35},"action":"insert","lines":["F"]}],[{"start":{"row":19,"column":35},"end":{"row":19,"column":36},"action":"insert","lines":[" "],"id":419}],[{"start":{"row":19,"column":36},"end":{"row":19,"column":37},"action":"insert","lines":["f"],"id":420}],[{"start":{"row":19,"column":62},"end":{"row":19,"column":66},"action":"remove","lines":["plus"],"id":421},{"start":{"row":19,"column":62},"end":{"row":19,"column":63},"action":"insert","lines":["f"]}],[{"start":{"row":19,"column":65},"end":{"row":19,"column":66},"action":"insert","lines":["\\"],"id":422},{"start":{"row":19,"column":66},"end":{"row":19,"column":67},"action":"insert","lines":["]"]}],[{"start":{"row":19,"column":66},"end":{"row":19,"column":67},"action":"remove","lines":["]"],"id":423},{"start":{"row":19,"column":65},"end":{"row":19,"column":66},"action":"remove","lines":["\\"]},{"start":{"row":19,"column":64},"end":{"row":19,"column":65},"action":"remove","lines":[")"]},{"start":{"row":19,"column":63},"end":{"row":19,"column":65},"action":"remove","lines":["()"]}],[{"start":{"row":19,"column":63},"end":{"row":19,"column":64},"action":"insert","lines":[")"],"id":424}],[{"start":{"row":19,"column":67},"end":{"row":20,"column":0},"action":"remove","lines":["",""],"id":425}],[{"start":{"row":11,"column":10},"end":{"row":12,"column":0},"action":"insert","lines":["",""],"id":426},{"start":{"row":12,"column":0},"end":{"row":12,"column":4},"action":"insert","lines":["    "]},{"start":{"row":12,"column":4},"end":{"row":13,"column":0},"action":"insert","lines":["",""]},{"start":{"row":13,"column":0},"end":{"row":13,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":14,"column":36},"end":{"row":14,"column":37},"action":"insert","lines":["="],"id":427},{"start":{"row":14,"column":37},"end":{"row":14,"column":38},"action":"insert","lines":["p"]},{"start":{"row":14,"column":38},"end":{"row":14,"column":39},"action":"insert","lines":["l"]}],[{"start":{"row":14,"column":37},"end":{"row":14,"column":39},"action":"remove","lines":["pl"],"id":428},{"start":{"row":14,"column":37},"end":{"row":14,"column":41},"action":"insert","lines":["plus"]}],[{"start":{"row":14,"column":41},"end":{"row":14,"column":42},"action":"insert","lines":["("],"id":429}],[{"start":{"row":14,"column":41},"end":{"row":14,"column":42},"action":"remove","lines":["("],"id":430}],[{"start":{"row":20,"column":0},"end":{"row":21,"column":0},"action":"remove","lines":["                accumulate (T con) : container(con), func(plus()) {}",""],"id":431}],[{"start":{"row":20,"column":37},"end":{"row":20,"column":38},"action":"insert","lines":["="],"id":432},{"start":{"row":20,"column":38},"end":{"row":20,"column":39},"action":"insert","lines":["p"]},{"start":{"row":20,"column":39},"end":{"row":20,"column":40},"action":"insert","lines":["l"]},{"start":{"row":20,"column":40},"end":{"row":20,"column":41},"action":"insert","lines":["u"]},{"start":{"row":20,"column":41},"end":{"row":20,"column":42},"action":"insert","lines":["s"]}],[{"start":{"row":20,"column":42},"end":{"row":20,"column":44},"action":"insert","lines":["()"],"id":433}],[{"start":{"row":20,"column":74},"end":{"row":21,"column":0},"action":"insert","lines":["",""],"id":434},{"start":{"row":21,"column":0},"end":{"row":21,"column":16},"action":"insert","lines":["                "]}],[{"start":{"row":27,"column":27},"end":{"row":28,"column":0},"action":"insert","lines":["",""],"id":435},{"start":{"row":28,"column":0},"end":{"row":28,"column":20},"action":"insert","lines":["                    "]},{"start":{"row":28,"column":20},"end":{"row":29,"column":0},"action":"insert","lines":["",""]},{"start":{"row":29,"column":0},"end":{"row":29,"column":20},"action":"insert","lines":["                    "]}],[{"start":{"row":30,"column":16},"end":{"row":30,"column":20},"action":"remove","lines":["    "],"id":436}],[{"start":{"row":31,"column":20},"end":{"row":31,"column":24},"action":"remove","lines":["    "],"id":437}],[{"start":{"row":32,"column":16},"end":{"row":32,"column":20},"action":"remove","lines":["    "],"id":438}],[{"start":{"row":33,"column":12},"end":{"row":33,"column":16},"action":"remove","lines":["    "],"id":439}],[{"start":{"row":34,"column":8},"end":{"row":34,"column":12},"action":"remove","lines":["    "],"id":440}],[{"start":{"row":35,"column":4},"end":{"row":35,"column":8},"action":"remove","lines":["    "],"id":441}],[{"start":{"row":36,"column":0},"end":{"row":36,"column":4},"action":"remove","lines":["    "],"id":442}],[{"start":{"row":37,"column":24},"end":{"row":37,"column":28},"action":"remove","lines":["    "],"id":443}],[{"start":{"row":38,"column":20},"end":{"row":38,"column":24},"action":"remove","lines":["    "],"id":444}],[{"start":{"row":39,"column":16},"end":{"row":39,"column":20},"action":"remove","lines":["    "],"id":445}],[{"start":{"row":40,"column":12},"end":{"row":40,"column":16},"action":"remove","lines":["    "],"id":446}],[{"start":{"row":41,"column":8},"end":{"row":41,"column":12},"action":"remove","lines":["    "],"id":447}],[{"start":{"row":42,"column":4},"end":{"row":42,"column":8},"action":"remove","lines":["    "],"id":448}],[{"start":{"row":43,"column":0},"end":{"row":43,"column":4},"action":"remove","lines":["    "],"id":449}],[{"start":{"row":44,"column":28},"end":{"row":44,"column":32},"action":"remove","lines":["    "],"id":450}],[{"start":{"row":45,"column":24},"end":{"row":45,"column":28},"action":"remove","lines":["    "],"id":451}],[{"start":{"row":46,"column":20},"end":{"row":46,"column":24},"action":"remove","lines":["    "],"id":452}],[{"start":{"row":47,"column":16},"end":{"row":47,"column":20},"action":"remove","lines":["    "],"id":453}],[{"start":{"row":48,"column":12},"end":{"row":48,"column":16},"action":"remove","lines":["    "],"id":454}],[{"start":{"row":49,"column":8},"end":{"row":49,"column":12},"action":"remove","lines":["    "],"id":455}],[{"start":{"row":50,"column":4},"end":{"row":50,"column":8},"action":"remove","lines":["    "],"id":456}],[{"start":{"row":51,"column":0},"end":{"row":51,"column":4},"action":"remove","lines":["    "],"id":457}],[{"start":{"row":52,"column":28},"end":{"row":52,"column":32},"action":"remove","lines":["    "],"id":458}],[{"start":{"row":53,"column":24},"end":{"row":53,"column":28},"action":"remove","lines":["    "],"id":459}],[{"start":{"row":54,"column":20},"end":{"row":54,"column":24},"action":"remove","lines":["    "],"id":460}],[{"start":{"row":55,"column":16},"end":{"row":55,"column":20},"action":"remove","lines":["    "],"id":461}],[{"start":{"row":56,"column":12},"end":{"row":56,"column":16},"action":"remove","lines":["    "],"id":462}],[{"start":{"row":57,"column":8},"end":{"row":57,"column":12},"action":"remove","lines":["    "],"id":463}],[{"start":{"row":58,"column":4},"end":{"row":58,"column":8},"action":"remove","lines":["    "],"id":464}],[{"start":{"row":59,"column":0},"end":{"row":59,"column":4},"action":"remove","lines":["    "],"id":465}],[{"start":{"row":59,"column":25},"end":{"row":63,"column":38},"action":"remove","lines":["","                    protected:","                            iterator(int start) : index(start) {}","                    private:","                            int index;"],"id":467}],[{"start":{"row":47,"column":25},"end":{"row":48,"column":0},"action":"insert","lines":["",""],"id":488},{"start":{"row":48,"column":0},"end":{"row":48,"column":24},"action":"insert","lines":["                        "]}],[{"start":{"row":48,"column":24},"end":{"row":56,"column":25},"action":"insert","lines":["                        iterator& operator=(const iterator& other) {","                                if (*this != other){","                                        this->end_iter = other.end_iter;","                                        this->sum = other.sum;","                                        this->inner_iter = other.inner_iter;","                                        this->func = other.func;","                                }","                                return *this;","                        }"],"id":489}],[{"start":{"row":48,"column":44},"end":{"row":48,"column":48},"action":"remove","lines":["    "],"id":490},{"start":{"row":48,"column":40},"end":{"row":48,"column":44},"action":"remove","lines":["    "]},{"start":{"row":48,"column":36},"end":{"row":48,"column":40},"action":"remove","lines":["    "]},{"start":{"row":48,"column":32},"end":{"row":48,"column":36},"action":"remove","lines":["    "]},{"start":{"row":48,"column":28},"end":{"row":48,"column":32},"action":"remove","lines":["    "]},{"start":{"row":48,"column":24},"end":{"row":48,"column":28},"action":"remove","lines":["    "]}],[{"start":{"row":49,"column":51},"end":{"row":50,"column":0},"action":"insert","lines":["",""],"id":491},{"start":{"row":50,"column":0},"end":{"row":50,"column":32},"action":"insert","lines":["                                "]}],[{"start":{"row":51,"column":36},"end":{"row":51,"column":40},"action":"remove","lines":["    "],"id":492}],[{"start":{"row":52,"column":32},"end":{"row":52,"column":36},"action":"remove","lines":["    "],"id":493}],[{"start":{"row":53,"column":28},"end":{"row":53,"column":32},"action":"remove","lines":["    "],"id":494}],[{"start":{"row":54,"column":24},"end":{"row":54,"column":28},"action":"remove","lines":["    "],"id":495}],[{"start":{"row":51,"column":42},"end":{"row":51,"column":50},"action":"remove","lines":["end_iter"],"id":496},{"start":{"row":51,"column":42},"end":{"row":51,"column":47},"action":"insert","lines":["eIter"]}],[{"start":{"row":51,"column":56},"end":{"row":51,"column":64},"action":"remove","lines":["end_iter"],"id":499},{"start":{"row":51,"column":56},"end":{"row":51,"column":61},"action":"insert","lines":["eIter"]}],[{"start":{"row":52,"column":42},"end":{"row":52,"column":45},"action":"remove","lines":["sum"],"id":500},{"start":{"row":52,"column":42},"end":{"row":52,"column":43},"action":"insert","lines":["r"]},{"start":{"row":52,"column":43},"end":{"row":52,"column":44},"action":"insert","lines":["e"]},{"start":{"row":52,"column":44},"end":{"row":52,"column":45},"action":"insert","lines":["s"]},{"start":{"row":52,"column":45},"end":{"row":52,"column":46},"action":"insert","lines":["u"]}],[{"start":{"row":52,"column":42},"end":{"row":52,"column":46},"action":"remove","lines":["resu"],"id":501},{"start":{"row":52,"column":42},"end":{"row":52,"column":48},"action":"insert","lines":["result"]}],[{"start":{"row":52,"column":57},"end":{"row":52,"column":60},"action":"remove","lines":["sum"],"id":502},{"start":{"row":52,"column":57},"end":{"row":52,"column":58},"action":"insert","lines":["r"]}],[{"start":{"row":52,"column":57},"end":{"row":52,"column":58},"action":"remove","lines":["r"],"id":503},{"start":{"row":52,"column":57},"end":{"row":52,"column":63},"action":"insert","lines":["result"]}],[{"start":{"row":53,"column":42},"end":{"row":53,"column":52},"action":"remove","lines":["inner_iter"],"id":504},{"start":{"row":53,"column":42},"end":{"row":53,"column":43},"action":"insert","lines":["b"]}],[{"start":{"row":53,"column":42},"end":{"row":53,"column":43},"action":"remove","lines":["b"],"id":505},{"start":{"row":53,"column":42},"end":{"row":53,"column":47},"action":"insert","lines":["bIter"]}],[{"start":{"row":53,"column":56},"end":{"row":53,"column":66},"action":"remove","lines":["inner_iter"],"id":506},{"start":{"row":53,"column":56},"end":{"row":53,"column":57},"action":"insert","lines":["b"]}],[{"start":{"row":53,"column":56},"end":{"row":53,"column":57},"action":"remove","lines":["b"],"id":507},{"start":{"row":53,"column":56},"end":{"row":53,"column":61},"action":"insert","lines":["bIter"]}],[{"start":{"row":37,"column":51},"end":{"row":37,"column":52},"action":"insert","lines":["*"],"id":508}],[{"start":{"row":45,"column":51},"end":{"row":45,"column":52},"action":"insert","lines":["*"],"id":509}],[{"start":{"row":48,"column":67},"end":{"row":49,"column":0},"action":"insert","lines":["",""],"id":510},{"start":{"row":49,"column":0},"end":{"row":49,"column":24},"action":"insert","lines":["                        "]}],[{"start":{"row":50,"column":28},"end":{"row":50,"column":32},"action":"remove","lines":["    "],"id":511}],[{"start":{"row":51,"column":24},"end":{"row":51,"column":28},"action":"remove","lines":["    "],"id":512}],[{"start":{"row":52,"column":20},"end":{"row":52,"column":24},"action":"remove","lines":["    "],"id":513}],[{"start":{"row":53,"column":16},"end":{"row":53,"column":20},"action":"remove","lines":["    "],"id":514}],[{"start":{"row":54,"column":12},"end":{"row":54,"column":16},"action":"remove","lines":["    "],"id":515}],[{"start":{"row":55,"column":8},"end":{"row":55,"column":12},"action":"remove","lines":["    "],"id":516}],[{"start":{"row":56,"column":4},"end":{"row":56,"column":8},"action":"remove","lines":["    "],"id":517}],[{"start":{"row":57,"column":0},"end":{"row":57,"column":4},"action":"remove","lines":["    "],"id":518}],[{"start":{"row":61,"column":51},"end":{"row":61,"column":52},"action":"remove","lines":["&"],"id":519},{"start":{"row":61,"column":50},"end":{"row":61,"column":51},"action":"remove","lines":["t"]},{"start":{"row":61,"column":49},"end":{"row":61,"column":50},"action":"remove","lines":["l"]},{"start":{"row":61,"column":48},"end":{"row":61,"column":49},"action":"remove","lines":["u"]},{"start":{"row":61,"column":47},"end":{"row":61,"column":48},"action":"remove","lines":["s"]},{"start":{"row":61,"column":46},"end":{"row":61,"column":47},"action":"remove","lines":["e"]},{"start":{"row":61,"column":45},"end":{"row":61,"column":46},"action":"remove","lines":["r"]},{"start":{"row":61,"column":44},"end":{"row":61,"column":45},"action":"remove","lines":["="]},{"start":{"row":61,"column":43},"end":{"row":61,"column":44},"action":"remove","lines":["="]},{"start":{"row":61,"column":42},"end":{"row":61,"column":43},"action":"remove","lines":["t"]},{"start":{"row":61,"column":41},"end":{"row":61,"column":42},"action":"remove","lines":["l"]},{"start":{"row":61,"column":40},"end":{"row":61,"column":41},"action":"remove","lines":["u"]},{"start":{"row":61,"column":39},"end":{"row":61,"column":40},"action":"remove","lines":["s"]},{"start":{"row":61,"column":38},"end":{"row":61,"column":39},"action":"remove","lines":["e"]},{"start":{"row":61,"column":37},"end":{"row":61,"column":38},"action":"remove","lines":["r"]},{"start":{"row":61,"column":36},"end":{"row":61,"column":37},"action":"remove","lines":["."]},{"start":{"row":61,"column":35},"end":{"row":61,"column":36},"action":"remove","lines":["r"]},{"start":{"row":61,"column":34},"end":{"row":61,"column":35},"action":"remove","lines":["e"]},{"start":{"row":61,"column":33},"end":{"row":61,"column":34},"action":"remove","lines":["h"]},{"start":{"row":61,"column":32},"end":{"row":61,"column":33},"action":"remove","lines":["t"]},{"start":{"row":61,"column":31},"end":{"row":61,"column":32},"action":"remove","lines":["o"]}],[{"start":{"row":61,"column":31},"end":{"row":61,"column":32},"action":"remove","lines":["&"],"id":520}],[{"start":{"row":67,"column":31},"end":{"row":67,"column":53},"action":"remove","lines":["other.result!=result||"],"id":521}]]},"ace":{"folds":[],"scrolltop":700.7999877929688,"scrollleft":0,"selection":{"start":{"row":67,"column":31},"end":{"row":67,"column":31},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1592138860148,"hash":"83c317d196e4fbe53fadd58f7013673dea94b5b6"}