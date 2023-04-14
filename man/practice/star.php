<html>
<?php
    $table =13;
$rows =20;
?>

<head>
	<title>
		<?printf("startup");?>
	</title>
</head>

<body>
	<table>
		<tr>
			<th>NO</th>
			<th>RED</th>
			<th>black</th>
		</tr>
		<?php
        for ($i=1; $i<=50; $i++) {
            ?>
		<tr>
			<td>
				<?printf("$i");?>
			<td>raja</td>
			<td>athul</td>
			<td>vaithe</td>
		</tr>
		<?php
        }
?>


	</table>
</body>

</html>
<pre>
	<?php
    $rows = 50;
system('./a.out' . $rows);
system('ls');
?>
</pre>