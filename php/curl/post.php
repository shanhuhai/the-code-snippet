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
                'sn'=>60100, 
                'content'=>array(
                    'content3', 
                    'content4' 
                ), 
            ),
        )
    );      

//    $data = array(      
//        'authKey'=>'xxxxx',
//        'data[0][sn]'=>'60001',
//        'data[0][content][0]'=>'content1',
//        'data[0][content][1]'=>'content2',
//        'data[1][sn]'=>'60002',
//        'data[1][content][0]'=>'content3',
//        'data[1][content][1]'=>'content4',
//
//    );    

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
$data = arrayToPostFields($data);
    $url = 'http://localhost:8000/post_server.php';
    $json_data = postData($url,$data);      
    echo 'local';var_dump($json_data);
    file_put_contents('xx.log',$json_data);

    function postData($url, $data, $timeout=0, $refer='') {      
        $ch = curl_init();      
        curl_setopt($ch, CURLOPT_URL, $url);     
        !empty($refer) && curl_setopt($ch, CURLOPT_REFERER, $refer);   //构造来路    
        curl_setopt($ch, CURLOPT_POST, true);      
        curl_setopt($ch, CURLOPT_POSTFIELDS, $data);      
        curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);      
        curl_setopt($ch, CURLOPT_CONNECTTIMEOUT, $timeout);      
        $handles = curl_exec($ch);      
        curl_close($ch);      
        return $handles;      
    }      

