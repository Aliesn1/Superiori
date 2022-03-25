<?php
 $max=0;
 $i=0;



    do{
        
        $num=rand();
    
    
    
        if ($num>$max)
            
            $max=$num;
            $i++;
        
        
    }while ($i<100);
    
    echo "Il massimo è $max";
