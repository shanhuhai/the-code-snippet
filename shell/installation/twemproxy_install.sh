#!/bin/bash
mkdir -p ~/download && cd ~/download
git clone https://github.com/twitter/twemproxy.git
cd twemproxy
autoreconf -fvi
./configure --prefix=/usr/local/twemproxy
make 
make install

cd /usr/local/twemproxy
mkdir run conf
cd  conf
cp ~/download/twemproxy/conf/nutcracker.yml ./nutcracker.yml
