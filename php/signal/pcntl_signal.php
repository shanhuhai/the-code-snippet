<?php
//使用ticks需要PHP 4.3.0以上版本
declare(ticks = 1);

require("func.php");

$i = 1;

//信号处理函数
echo "Installing signal handler...\n";

//安装信号处理器
pcntl_signal(SIGTERM, "sig_handler");
pcntl_signal(SIGHUP,  "sig_handler");
pcntl_signal(SIGUSR1, "sig_handler");

// 或者在PHP 4.3.0以上版本可以使用对象方法
// pcntl_signal(SIGUSR1, array($obj, "do_something");

while(1){
    $i++;
    sleep(2);
}

?>

