<?php


function sottrazione($a, $b){
  global $varx;
  $varx= $a - $b;
  return $varx;
}

function messaggio ($testo){
  echo $testo;
}
function Main(){
  messaggio("Ciao mondo");
  messaggio("Lezione di informatica");

}

Function add($valoreA, $ValoreB){
  $risultato=$valoreA+$ValoreB;
return $risultato;


}


Main();
echo add(254, 7892);
echo "risultato =".add( add(5,0), add(5,7) );
sottrazione(74, 9);
echo "Sottrazione = $varx";
 ?>
