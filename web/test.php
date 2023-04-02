<html>
<?php
$table = 13;
$row = 100;
?>

    <head>
        <title>
            <?php printf("sample");?>
        </title>
    </head>

    <body>
        <table>
            <tr>
                <th>NO</th>
                <th>MEMBERS</th>
                <th>YEAR</th>
            </tr>
            <?php
            for ($i=1; $i<=100; $i++) {
                ?>
                <tr>
                    <td>
                        <?printf("%d", $i); ?>
                    </td>
                    <td>X</td>
                    <td>
                        <?printf("%d", $table); ?>
                    </td>
                    <td>
                        <?printf("%d", $table*$i); ?>
                    </td>
                </tr>
                <?php
            }
?>
        </table>
    </body>

</html>