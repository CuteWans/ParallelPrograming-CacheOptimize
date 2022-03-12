#!/bin/sh
# PBS -N lqx2
# PBS -l nodes=1
pssh -h $PBS_NODEFILE rm -rf /home/s2010519/2 1>&2
pscp -r -h $PBS_NODEFILE /home/s2010519/2 /home/s2010519 1>&2
/home/s2010519/2/bin/run.sh
