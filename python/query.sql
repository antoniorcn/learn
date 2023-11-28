DELIMITER $$

CREATE PROCEDURE relatorio_ano_corrente ()
BEGIN
    SELECT  DATE(L.DATA_HORA) as "Data (SEM HORA)", 
            U.Nome as "Nome Usuário",  
            COUNT(*) as "Quantidade de logins x dia" 
    FROM Usuários as U 
    INNER JOIN Logins_ao_Sistema as L ON U.idUsuário == L.idUsuário 
    GROUP BY DATE(L.DATA_HORA), U.Nome
END $$
DELIMITER ;