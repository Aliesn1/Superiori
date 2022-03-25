<?php
    $a=1;
    $fattoriale=1;
    $numero=5;
    
    if ($numero>0){
       for ($i=0;$i<$numero;$i++)
            {
                $fattoriale=$fattoriale*$a;
                $a++;
               
            }
    
    echo "Il fattoriale del $numero è $fattoriale";
    }
    
    else{
        
        echo "Il numero inserito è negativo";
    }
    
?>
