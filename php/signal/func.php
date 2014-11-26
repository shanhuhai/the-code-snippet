<?php

function sig_handler($signo)
{

    global $i;
     switch ($signo) {
         case SIGTERM:
             // 处理SIGTERM信号
             echo "Byebye\n";
             exit;
             break;
         case SIGHUP:
             //处理SIGHUP信号
             break;
         case SIGUSR1:
             echo "Caught SIGUSR1...{$i}\n";
             break;
         default:
             // 处理所有其他信号
     }

}


