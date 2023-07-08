
/*SQL - Structured query language - linguagem de consulta estruturada
t-sql - transact sql

--select = seleciona
--* tudo(todas as tabelas)
--from = apartir de/vindo de - nome da tabela
--where = onde <- da tabela o atributo (filtro)
--as -> alias renomear as colunas
*/


select * from Person.Person ;

SELECT NameStyle,FirstName,BusinessEntityID from Person.Person
WHERE FirstName = 'Gail'
