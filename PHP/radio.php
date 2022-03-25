<html>
<form method = "POST" action = 'http://localhost/Radio/scelta.php'>
    <h2> Indovina la mia combinazione</h2>
    <p>Scegli un numero da 1 a 9:</p>
      <?php
        for($i=0; $i<10; $i++){

        echo "<input type =\"radio\"name=\"scelta_1\"value=$i/>$i";
        }
      ?>

      <br/> Scegli un secondo numero:<br>
      <?php
        for($i=0; $i<10; $i++){


        echo "<input type=\"radio\"name=\"scelta_2\"value=$i/>$i";

        }

      ?>
      <br>
    </br>
    <button type = "submit" value= "invia" />Invia
    <button type = "reset" value= "resetta" />Resetta
</form>


</html>
