<?php

 $pre=1;
 $suc=1;
 $num1=34;
 $data=21;
$risultato=FALSE;
   while ($suc<=$num1)
   {
     $suc=$suc+$pre;
     $pre=$suc-$pre;
     if ($data==$suc)
     {
         echo "La data appartiene alla successione con il numero ", $suc;
         $risultato=TRUE;
     }
   }
   if ($risultato==FALSE)
   {
     echo "La data non appartiene alla successione";
   }
?>
