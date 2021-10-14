#!/bin/bash
cases=("Arranjo randomico", "Arranjo em ordem crescente", "Arranjo em ordem decrescente")
index=0
rm -rf benchmarks/plots
mkdir benchmarks/plots

for _case in r a d
do
    graph_title=$(echo ${cases[$index]} | sed 's/,/ /')
    echo "
    set title \"Complexidade de tempo: $graph_title\"
    set xlabel \"Tamanho da entrada (n)\"
    set ylabel \"Tempo de execução (ms)\"
    set key left top
    set terminal png size 640,480    
    set output 'benchmarks/plots/$_case.png'
    plot \"./benchmarks/insertion/$_case.txt\" using 1:2 with linespoints title \"Insertion Sort\", \
    \"./benchmarks/quick/$_case.txt\" using 1:2 with linespoints title \"Quick Sort\",  \
    \"./benchmarks/shell/$_case.txt\" using 1:2 with linespoints title \"Shell sort\",   \
    \"./benchmarks/merge/$_case.txt\" using 1:2 with linespoints title \"Merge sort\",   \
    \"./benchmarks/counting/$_case.txt\" using 1:2 with linespoints title \"Counting sort\",   \
    \"./benchmarks/bucket/$_case.txt\" using 1:2 with linespoints title \"Bucket sort\",   \

    " > plotdata.gp && gnuplot -c plotdata.gp

    rm plotdata.gp
    index=$(($index+1))

done

for _case in r a d
do
    graph_title=$(echo ${cases[$index]} | sed 's/,/ /')
    echo "
    set title \"Complexidade de tempo: $graph_title (Escala logarítmica)\"
    set xlabel \"Tamanho da entrada (n)\"
    set ylabel \"Tempo de execução (ms)\"
    set key left top
    set terminal png size 640,480
    set logscale y
    set termoption enhanced
    
    set output 'benchmarks/plots/log_$_case.png'
    plot \"./benchmarks/insertion/$_case.txt\" using 1:2 with linespoints title \"Insertion Sort\", \
    \"./benchmarks/quick/$_case.txt\" using 1:2 with linespoints title \"Quick Sort\",  \
    \"./benchmarks/shell/$_case.txt\" using 1:2 with linespoints title \"Shell sort\",   \
    \"./benchmarks/merge/$_case.txt\" using 1:2 with linespoints title \"Merge sort\",   \
    \"./benchmarks/counting/$_case.txt\" using 1:2 with linespoints title \"Counting sort\",   \
    \"./benchmarks/bucket/$_case.txt\" using 1:2 with linespoints title \"Bucket sort\",   \

    " > plotdata.gp && gnuplot -c plotdata.gp

    rm plotdata.gp
    index=$(($index+1))

done
exit 0