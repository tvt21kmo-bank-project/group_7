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
-- Table structure for table `credit`
--

DROP TABLE IF EXISTS `credit`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `credit` (
  `idCredit` int NOT NULL AUTO_INCREMENT,
  `Luottoraja` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idCredit`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `credit`
--

LOCK TABLES `credit` WRITE;
/*!40000 ALTER TABLE `credit` DISABLE KEYS */;
/*!40000 ALTER TABLE `credit` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `debit`
--

DROP TABLE IF EXISTS `debit`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `debit` (
  `idDebit` int NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`idDebit`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `debit`
--

LOCK TABLES `debit` WRITE;
/*!40000 ALTER TABLE `debit` DISABLE KEYS */;
/*!40000 ALTER TABLE `debit` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `kayttaja`
--

LOCK TABLES `kayttaja` WRITE;
/*!40000 ALTER TABLE `kayttaja` DISABLE KEYS */;
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
  `PINkoodi` int DEFAULT NULL,
  `idDebit` int NOT NULL,
  `idCredit` int NOT NULL,
  PRIMARY KEY (`idKayttaja`,`idPankkitili`,`idDebit`,`idCredit`),
  KEY `fk_Käyttäjä_has_Pankkitili_Pankkitili1_idx` (`idPankkitili`),
  KEY `fk_Käyttäjä_has_Pankkitili_Käyttäjä_idx` (`idKayttaja`),
  KEY `fk_Pankkikortti_Debit1_idx` (`idDebit`),
  KEY `fk_Pankkikortti_Credit1_idx` (`idCredit`),
  CONSTRAINT `fk_Käyttäjä_has_Pankkitili_Käyttäjä` FOREIGN KEY (`idKayttaja`) REFERENCES `kayttaja` (`idKayttaja`),
  CONSTRAINT `fk_Käyttäjä_has_Pankkitili_Pankkitili1` FOREIGN KEY (`idPankkitili`) REFERENCES `pankkitili` (`idPankkitili`),
  CONSTRAINT `fk_Pankkikortti_Credit1` FOREIGN KEY (`idCredit`) REFERENCES `credit` (`idCredit`),
  CONSTRAINT `fk_Pankkikortti_Debit1` FOREIGN KEY (`idDebit`) REFERENCES `debit` (`idDebit`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pankkikortti`
--

LOCK TABLES `pankkikortti` WRITE;
/*!40000 ALTER TABLE `pankkikortti` DISABLE KEYS */;
/*!40000 ALTER TABLE `pankkikortti` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pankkitili`
--

DROP TABLE IF EXISTS `pankkitili`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pankkitili` (
  `idPankkitili` int NOT NULL,
  `idKayttaja` int NOT NULL,
  `Saldo` float DEFAULT NULL,
  `TiliNimi` varchar(45) DEFAULT NULL,
  `Tilinumero` int DEFAULT NULL,
  PRIMARY KEY (`idPankkitili`,`idKayttaja`),
  KEY `fk_Pankkitili_Kayttaja1_idx` (`idKayttaja`),
  CONSTRAINT `fk_Pankkitili_Kayttaja1` FOREIGN KEY (`idKayttaja`) REFERENCES `kayttaja` (`idKayttaja`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pankkitili`
--

LOCK TABLES `pankkitili` WRITE;
/*!40000 ALTER TABLE `pankkitili` DISABLE KEYS */;
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
  `idPankkitili` int NOT NULL,
  `idKayttaja` int NOT NULL,
  `pvm_klo` datetime DEFAULT NULL,
  `Tapahtuma` varchar(45) DEFAULT NULL,
  `Summa` float DEFAULT NULL,
  `PankkikorttiID` int DEFAULT NULL,
  PRIMARY KEY (`idTilitapahtumat`,`idPankkitili`,`idKayttaja`),
  KEY `fk_Tilitapahtumat_Pankkitili1_idx` (`idPankkitili`,`idKayttaja`),
  CONSTRAINT `fk_Tilitapahtumat_Pankkitili1` FOREIGN KEY (`idPankkitili`, `idKayttaja`) REFERENCES `pankkitili` (`idPankkitili`, `idKayttaja`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtuma`
--

LOCK TABLES `tilitapahtuma` WRITE;
/*!40000 ALTER TABLE `tilitapahtuma` DISABLE KEYS */;
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

-- Dump completed on 2021-11-15 17:18:09
