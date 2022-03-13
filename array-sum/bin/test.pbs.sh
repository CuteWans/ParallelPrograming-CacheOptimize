#!/bin/sh
# PBS -N lqx3
# PBS -l nodes=1
# pssh -h $PBS_NODEFILE rm -rf /home/s2010519/3 1>&2
pscp -r -h $PBS_NODEFILE /home/s2010519/array-sum /home/s2010519 1>&2
/home/s2010519/array-sum/bin/run.sh
