/*
 * This file is part of PRO CFW.

 * PRO CFW is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * PRO CFW is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PRO CFW. If not, see <http://www.gnu.org/licenses/ .
 */

#include "systemctrl.h"
#include "systemctrl_se.h"
#include "utils.h"
#include "main.h"

const char * g_messages_fr[] = { /* Translated by xFede and Jiiwah */
        "Menu Recovery PRO",
        "Menu Principal",
        "Saisie",
        "Quitte",
        "Retour",
        "D�faut",
        "Activ�",
        "D�activ�",
        "Connexion USB",
        "Connexion USB Activ�",
        "Connexion USB D�activ�",
        "Configuration",
        "Changer de r�gion",
        "Police du Menu Recovery",
        "Mode ISO",
        "Normal",
        "M33 driver",
        "Sony NP9660",
        "Inferno",
        "Connexion � un PC via un c�ble USB",
        "Flash 0",
        "Flash 1",
        "Flash 2",
        "Flash 3",
        "Disque UMD",
        "Charger la batterie pendant que le c�ble USB est ins�r�",
        "Utilisation de la couleur d'une Slim sur une PSP-1000",
        "Utiliser une destination personnalis�e pour htmlviewer",
        "Cacher l'adresse MAC",
        "Passer le logo Sony au d�marrage",
        "Passer le GameBoot",
        "Cacher PIC0.PNG et PIC1.PNG dans le menu Jeux",
        "Prot�ger le Flash lors d'une connexion USB",
        "Utiliser version.txt dans / seplugins",
        "Utiliser usbversion.txt dans / seplugins",
        "Mise � jour via le serveur PRO",
        "Emp�cher la suppression de l'hibernation (PSP-Go)",
        "Options avanc�es",
        "Plugins pour le XMB",
        "Plugins pour les Jeux",
        "Plugins pour the Pops",
        "Moteur NodRm",
        "Cacher les fichiers CFW du menu jeux",
        "Bloquer le stick analogique dans les jeux",
        "Support des vieux plugins (PSP-Go)",
        "Inferno & NP9660 Utiliser ISO Cache",
        "Inferno & NP9660 Taille du cache (en Mb)",
        "Inferno & NP9660 Nombre du cache",
        "Inferno & NP9660 Politique du cache",
        "Permettre les noms de fichiers ISO non-latin1",
        "Acc�l�rer la Memory Stick",
        "Aucun",
        "Pop",
        "Jeux",
        "VSH",
        "Pop & Jeux",
        "Jeux & VSH",
        "VSH & Pop",
        "Toujours",
        "CPU Vitesse",
        "CPU / BUS au XMB",
        "CPU / BUS dans les Jeux",
        "Plugins",
        "M�moire interne (PSP-Go)",
        "Memory Stick",
        "Plugins dans la m�moire interne (PSP-Go)",
        "Plugins dans la memory stick",
        "Registre Hacks",
        "WMA Activ�",
        "Flash Activ�",
        "Touches invers�es",
        "Confirmez la touche: X",
        "Confirmez la touche: O",
        "Activer la lecture du WMA",
        "Activer le lecteur Flash",
        "Inverser les touches O / X",
        "Inverser les touches O / X (vous devez red�marrer le VSH)",
        "Supprimer Hibernation (PSP-Go)",
        "Hibernation �limin�e",
        "D�marrer / PSP / GAME / RECOVERY / EBOOT.PBP",
        "Eteindre la console",
        "Mettre en veille la Console",
        "Red�marrer la console",
        "Red�marrer VSH",
        "Page",
        "Japon",
        "Am�rique",
        "Europe",
        "La Cor�e",
        "Royaume-Uni",
        "Mexique",
        "Australie",
        "Hong Kong",
        "Ta�wan",
        "La Russie",
        "La Chine",
        "Le mode Debug I",
        "Le mode Debug II",
};

u8 message_test_fr[NELEMS(g_messages_fr) == MSG_END ? 0 : -1];
