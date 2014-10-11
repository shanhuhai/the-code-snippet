<?php

    $data = array(      
        'authKey'=>'xxxxx',
        'data'=>array(
            array(
                'sn'=>60100, 
                'content'=>array(
                    'content1', 
                    'content2' 
                ), 
            ), 
            array(
                'sn'=>60101, 
                'content'=>array(
                    'content3', 
                    'content4' 
                ), 
            ),
        )
    );   


function arrayToPostFields($array,$suffix='', &$data= array()){
    if(is_array($array)) {
            foreach($array as $key=>$value){
                if(is_array($value)) {
                     if($suffix==''){
                        $tmp = $key; 
                    }elseif($suffix!='' && strpos($suffix,'[') === false) {
                        $tmp = $suffix.'['.$key; 
                    }else{
                        $tmp = $suffix.']['.$key; 
                    }
                   arrayToPostFields($value, $tmp, $data);  
                } else {
                    if($suffix==''){
                        $tmp = $key; 
                    }else{
                        $tmp = $suffix.']['.$key.']'; 
                    }
                   $data[$tmp]=$value;  
                } 
            } 
    }
   
    
    return $data ;

}

