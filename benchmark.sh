#!/bin/bash

time_sum=0
time_mean=0

number_of_sorts=6 
number_of_inputs=2
number_of_cases=10
number_of_test=$(bc <<< "$number_of_sorts * $number_of_cases * $number_of_inputs * 10")
actual_test=1
rm -rf benchmarks
rm temp.arr
mkdir benchmarks

# Argumentos: sort caso entrada, cada sort testa todos os casos e entradas
# Tratar: Arquivos separados e média de 10 execuções

printf "NUMBER OF TESTS: %d\n" $number_of_test

for sort in insertion shell merge quick bucket counting
do
    mkdir benchmarks/$sort
    for _case in r a d
    do
        printf "input(n) time(ns)\n" $n $elapsed_time >> benchmarks/$sort/$_case.txt  

        for n in 1000 5000 10000 25000 50000 75000 100000 250000 500000 1000000
        do
            # Para cada caso 10 execuções
            touch benchmarks/$sort/$_case.txt
            elapsed_time=0
            elapsed_time_avg=0
                
            for i in {1..10}
            do
                printf "TEST[%d / %d]: %s %s %s\n" $actual_test $number_of_test $sort $n $_case
                et=$(./bin/app $sort $_case $n $i)
                elapsed_time=$(($elapsed_time + $et))
                actual_test=$((actual_test + 1))
            done
            rm temp.arr
            elapsed_time_avg=$(bc <<< "scale=0;$elapsed_time/10")
            echo $n $elapsed_time_avg
            printf "%d %.0f\n" $n $elapsed_time_avg >> benchmarks/$sort/$_case.txt  

        done
    done
done
exit 0
