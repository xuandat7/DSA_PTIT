Prim(u){
    V = V \ {u};
    Vh = Vh U {u};
    t = 0
    d(t) = 0;
    while(v != 0){
        e = <s,v> // s thuộc Vh, v thuộc V, cạnh e độ dài nhỏ nhất
        d(t) = d(t) + d(e);
        t = t U {e};
        if(o tìm dc e)  return <k liên thông>
        v = v \ {s};
        vh = vh U {s};

    }
    return (t, d(t));
}