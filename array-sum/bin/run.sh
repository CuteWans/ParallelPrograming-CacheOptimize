for i in {1..23}; do
    cache_chains_newfile="cache_chains_$((1 << $i)).out"
    cache_dcirculate_newfile="cache_dcirculate_$((1 << $i)).out"
    cache_recursion_newfile="cache_recursion_$((1 << $i)).out"
    ord_newfile="ord_array_$((1 << $i)).out"
    /home/s2010519/3/build/cache_chains <"/home/s2010519/3/res/$((1 << $i)).in" >"/home/s2010519/3/build/$cache_chains_newfile"
    /home/s2010519/3/build/cache_dcirculate <"/home/s2010519/3/res/$((1 << $i)).in" >"/home/s2010519/3/build/$cache_dcirculate_newfile"
    /home/s2010519/3/build/cache_recursion <"/home/s2010519/3/res/$((1 << $i)).in" >"/home/s2010519/3/build/$cache_recursion_newfile"
    /home/s2010519/3/build/ord <"/home/s2010519/3/res/$((1 << $i)).in" >"/home/s2010519/3/build/$ord_newfile"
done
