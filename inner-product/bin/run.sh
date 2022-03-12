array=(0 10 50 100 200 500 750 1000 1500 2000 2500 3000 3500 4000)
for i in $(seq 13); do
    cache_newfile="cache_array_${array[i]}.out"
    ord_newfile="ord_array_${array[i]}.out"
    /home/s2010519/2/build/cache <"/home/s2010519/2/res/${array[i]}.in" >"/home/s2010519/2/build/$cache_newfile"
    /home/s2010519/2/build/ord <"/home/s2010519/2/res/${array[i]}.in" >"/home/s2010519/2/build/$ord_newfile"
done
