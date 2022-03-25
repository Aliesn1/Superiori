<?php

define ('MAX', 10);
$fibo[0]= 1;
$fibo[1]=1;

for ($j= 2; j<MAX; $j++){
  $fibo[$j] = $fibo[$j-2]+ $fibo[$j-1];

}

for ($i=0; $i<count($fibo); $i++){

  echo $fibo[$j]."-";
}


?>
