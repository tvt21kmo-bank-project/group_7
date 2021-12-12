-- MySQL dump 10.13  Distrib 8.0.23, for Win64 (x86_64)
--
-- Host: localhost    Database: banksimul
-- ------------------------------------------------------
-- Server version	8.0.23

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Current Database: `banksimul`
--

CREATE DATABASE /*!32312 IF NOT EXISTS*/ `banksimul` /*!40100 DEFAULT CHARACTER SET utf8 */ /*!80016 DEFAULT ENCRYPTION='N' */;

USE `banksimul`;

--
-- Table structure for table `kayttaja`
--

DROP TABLE IF EXISTS `kayttaja`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `kayttaja` (
  `idKayttaja` int NOT NULL AUTO_INCREMENT,
  `Etunimi` varchar(45) DEFAULT NULL,
  `Sukunimi` varchar(45) DEFAULT NULL,
  `Osoite` varchar(45) DEFAULT NULL,
  `Puhelinnumero` varchar(45) DEFAULT NULL,
  `Hetu` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idKayttaja`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `kayttaja`
--

LOCK TABLES `kayttaja` WRITE;
/*!40000 ALTER TABLE `kayttaja` DISABLE KEYS */;
INSERT INTO `kayttaja` VALUES (1,'Pekka','Pouta','Poudankatu 11','0401234567','1234567'),(2,'Maija','Poppanen','Poppasenkuja 3','0407654321','7654321'),(3,'Harry','Potter','Taikatie 420','0401212121','1212121'),(4,'Hilleri','Hiiri','Juustotunneli 313','0403131313','3131313'),(5,'Hyväntekeväisyys','Järjestö','Köyhäkuja 500','0405556666',NULL);
/*!40000 ALTER TABLE `kayttaja` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pankkikortti`
--

DROP TABLE IF EXISTS `pankkikortti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pankkikortti` (
  `idKayttaja` int NOT NULL,
  `idPankkitili` int NOT NULL,
  `PankkikorttiID` int DEFAULT NULL,
  `pinkoodi` varchar(255) DEFAULT NULL,
  `Credit` int DEFAULT NULL,
  `Luottoraja` decimal(10,2) DEFAULT NULL,
  `Debit` int DEFAULT NULL,
  PRIMARY KEY (`idKayttaja`,`idPankkitili`),
  KEY `fk_Käyttäjä_has_Pankkitili_Pankkitili1_idx` (`idPankkitili`),
  KEY `fk_Käyttäjä_has_Pankkitili_Käyttäjä_idx` (`idKayttaja`),
  CONSTRAINT `fk_Käyttäjä_has_Pankkitili_Käyttäjä` FOREIGN KEY (`idKayttaja`) REFERENCES `kayttaja` (`idKayttaja`),
  CONSTRAINT `fk_Käyttäjä_has_Pankkitili_Pankkitili1` FOREIGN KEY (`idPankkitili`) REFERENCES `pankkitili` (`idPankkitili`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pankkikortti`
--

LOCK TABLES `pankkikortti` WRITE;
/*!40000 ALTER TABLE `pankkikortti` DISABLE KEYS */;
INSERT INTO `pankkikortti` VALUES (1,1,12,'$2a$10$RRxZCRRdp/4KuEyTk9nA2.uJQukuragwnW3exhUaEGLFKq/noKXP6',1,980.00,2),(2,2,76,'$2a$10$hWhGttrZrS9DYcZgcJ04veaWkGGO4k9XDut2HPGNyCN123AHBlCoq',1,500.00,2),(3,3,21,'$2a$10$.OFKd8dXOMRIEAOIn/U5Cu2Prnk1i73G4ssUiciPshJzGKyqN7Kd.',1,2999.00,2),(4,4,31,'$2a$10$1Jd.kB2W98361NJyTqBL2.s4ddujndSzAWz4lDZ2vqaHflGFQUIuO',1,NULL,2),(5,5,65,'$2a$10$LWja4paKBzRgUUEAy4T95edYtws9JzXdOM/TUIj1oGSgYi5QT508W',1,NULL,2);
/*!40000 ALTER TABLE `pankkikortti` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pankkitili`
--

DROP TABLE IF EXISTS `pankkitili`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pankkitili` (
  `idPankkitili` int NOT NULL AUTO_INCREMENT,
  `idKayttaja` int NOT NULL,
  `Saldo` decimal(10,2) DEFAULT NULL,
  `TiliNimi` varchar(45) DEFAULT NULL,
  `Tilinumero` int DEFAULT NULL,
  PRIMARY KEY (`idPankkitili`,`idKayttaja`),
  KEY `fk_Pankkitili_Kayttaja1_idx` (`idKayttaja`),
  CONSTRAINT `fk_Pankkitili_Kayttaja1` FOREIGN KEY (`idKayttaja`) REFERENCES `kayttaja` (`idKayttaja`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pankkitili`
--

LOCK TABLES `pankkitili` WRITE;
/*!40000 ALTER TABLE `pankkitili` DISABLE KEYS */;
INSERT INTO `pankkitili` VALUES (1,1,299730.31,'Käyttötili',2143657),(2,2,509.12,'Käyttötili',6745231),(3,3,1226855.69,'Perintötili',2121211),(4,4,5.24,'Juustotili',1313133),(5,5,12933.00,'Hyväntekeväisyystili',6566655);
/*!40000 ALTER TABLE `pankkitili` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tilitapahtuma`
--

DROP TABLE IF EXISTS `tilitapahtuma`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tilitapahtuma` (
  `idTilitapahtumat` int NOT NULL AUTO_INCREMENT,
  `pvm_klo` datetime DEFAULT NULL,
  `Tapahtuma` varchar(45) DEFAULT NULL,
  `Summa` decimal(10,2) DEFAULT NULL,
  `PankkikorttiID` int DEFAULT NULL,
  PRIMARY KEY (`idTilitapahtumat`)
) ENGINE=InnoDB AUTO_INCREMENT=54 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtuma`
--

LOCK TABLES `tilitapahtuma` WRITE;
/*!40000 ALTER TABLE `tilitapahtuma` DISABLE KEYS */;
INSERT INTO `tilitapahtuma` VALUES (1,'2021-12-08 18:13:47','lahjoitus',-42.00,12),(2,'2021-12-08 18:22:57','lahjoitus',-42.00,12),(3,'2021-12-08 18:27:24','Lahjoitus',200.00,21),(4,'2021-12-08 18:43:23','Lahjoitus',-5.00,12),(5,'2021-12-08 18:46:46','Lahjoitus',-6.00,12),(6,'2021-12-08 18:50:00','Lahjoitus',-8.00,12),(7,'2021-12-08 18:51:53','Lahjoitus',-7.00,12),(8,'2021-12-08 19:55:26','Lahjoitus',-6.00,NULL),(9,'2021-12-08 19:58:22','Lahjoitus',-809.00,21),(10,'2021-12-08 20:44:51','Lahjoitus',-11.00,21),(11,'2021-12-08 21:29:30','Lahjoitus',-12.00,12),(12,'2021-12-08 21:32:24','Lahjoitus',-5.00,12),(13,'2021-12-09 18:04:12','Lahjoitus',-2.00,12),(14,'2021-12-09 18:15:46','Lahjoitus',-1.00,12),(15,'2021-12-09 18:18:18','Lahjoitus',-1.00,12),(16,'2021-12-09 18:44:58','Lahjoitus',-1.00,12),(17,'2021-12-09 19:00:56','Lahjoitus',-12.00,12),(18,'2021-12-09 19:10:44','Lahjoitus',-1.00,12),(19,'2021-12-09 19:12:29','Lahjoitus',-1.00,12),(20,'2021-12-11 23:21:15','Lahjoitus',-2.00,12),(21,'2021-12-12 00:01:03','Lahjoitus',0.00,65),(22,'2021-12-12 02:38:38','Lahjoitus',-1.00,21),(23,'2021-12-12 02:41:50','Lahjoitus',-1.00,21),(24,'2021-12-12 02:43:35','Lahjoitus',-1.00,21),(25,'2021-12-12 02:57:36','Lahjoitus',-1.00,21),(26,'2021-12-12 03:03:40','Lahjoitus',-1.00,21),(27,'2021-12-12 03:08:44','Lahjoitus',-1.00,21),(28,'2021-12-12 03:10:12','Lahjoitus',-50.00,21),(29,'2021-12-12 03:11:15','Lahjoitus',-66.00,21),(30,'2021-12-12 03:27:24','Lahjoitus',0.00,NULL),(31,'2021-12-12 03:43:56','Nosto',-12.00,NULL),(32,'2021-12-12 03:55:55','Nosto',-68.00,21),(33,'2021-12-12 03:58:57','Nosto',0.00,21),(34,'2021-12-12 04:00:05','Nosto',-200.00,21),(35,'2021-12-12 04:01:21','Nosto',-500.00,21),(36,'2021-12-12 04:01:47','Nosto',-200.00,21),(37,'2021-12-12 04:02:03','Nosto',-100.00,21),(38,'2021-12-12 04:02:21','Nosto',-60.00,21),(39,'2021-12-12 04:02:37','Nosto',-40.00,21),(40,'2021-12-12 04:02:54','Nosto',-20.00,21),(41,'2021-12-12 04:03:14','Nosto',-90.00,21),(42,'2021-12-12 05:37:44','Lahjoitus',-2.00,21),(43,'2021-12-12 05:44:52','Lahjoitus',-3.00,76),(44,'2021-12-12 05:50:37','Saapunut lahjoitus',3.00,65),(45,'2021-12-12 05:50:41','Saapunut lahjoitus',3.00,65),(46,'2021-12-12 05:53:47','Lahjoitus',-80.00,21),(47,'2021-12-12 05:57:17','Lahjoitus',-121.00,12),(48,'2021-12-12 05:58:30','Saapunut lahjoitus',121.00,65),(49,'2021-12-12 06:00:15','Lahjoitus',-30.00,21),(50,'2021-12-12 06:01:38','Lahjoitus',-8.00,12),(51,'2021-12-12 06:05:02','Lahjoitus',-7.00,21),(52,'2021-12-12 06:06:41','Nosto',-1.00,21),(53,'2021-12-12 06:07:46','Nosto',-3.00,21);
/*!40000 ALTER TABLE `tilitapahtuma` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-12-12 19:00:27
