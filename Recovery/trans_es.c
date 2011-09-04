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

const char * g_messages_es[] = { /* Translated by xFede */
	"PRO Recovery Men�", 
	"Men� Principal",
	"Entrando",
	"Saliendo",
	"Atr�s",
	"Por Defecto",
	"Activado",
	"Desactivado",
	"Conexi�n USB", 
	"Conexi�n USB  Habilitada",
	"Conexi�n USB Deshabilitada",
	"Configuraci�n",
	"Cambiar Regi�n",
	"Font del Recovery Men�",
	"Modalidad ISO",
	"Normal",
	"M33 driver",
	"Sony NP9660",
	"Infierno",
	"Conecta a PC mediante un cable USB",
	"Flash 0",
	"Flash 1",
	"Flash 2",
	"Flash 3",
	"Disco UMD",
	"Carga la bater�a mientras el cable USB est� insertado",
	"Utilize los colores de una Slim en una PSP-1000",
	"Utilize una ubicaci�n personalizada para el htmlviewer",
	"Ocultar la direcci�n MAC",
	"Obvia el logo de la Sony al encender la PSP",
	"Obvia el GameBoot",
	"Oculta PIC0.PNG y PIC1.PNG en el men� Juego",
	"Proteger la Flash durante la conexi�n USB",
	"Utilica version.txt en /seplugins",
	"Utilica usbversion.txt en /seplugins",
	"Actualiza atraves el Servidor PRO",
	"Evita la Eliminaci�n de la Hibernaci�n (s�lo PSP-Go)",
	"Opciones Avanzadas",
	"Plugins para la XMB",
	"Plugins para los Juegos",
	"Plugins para los Pops",
	"NoDRM Engine",
	"Oculta los archivos relacionados al CFW nel men� Juego",
	"Bloquea el Stick Anal�gico en los Juegos",
	"Soporte para los viejos plugin (s�lo PSP-Go)",
	"Infierno & NP9660 Usa ISO Cach�",
	"Infierno & NP9660 Tama�o de la Cach� (en MB)",
	"Infierno & NP9660 N�mero de Cach�",
	"Infierno & NP9660 Cach� Policy",
	"Permite los Nombres Non-lat�n1 para las ISO",
	"Acelera la Memoria Stick",
	"Ninguno",
	"Pop",
	"Juegos",
	"Vsh",
	"Pop & Juegos",
	"Juegos & Vsh",
	"Vsh & Pop",
	"Siempre",
	"Velocidad de la CPU",
	"CPU/BUS en la XMB",
	"CPU/BUS en los Juegos",
	"Plugins",
	"Memoria Interna (s�lo PSP-Go)",
	"Memoria Stick",
	"Plugins en la memoria interna (s�lo PSP-Go)",
	"Plugins en la memoria stick",
	"Registro de los Hack",
	"Reproducci�n WMA Habilitada",
	"Flash Player Habilitado",
	"Tastos Invertidos",
	"Confirma el Tasto: X",
	"Confirma el Tasto: O",
	"Habilita la Reproducci�n WMA",
	"Habilita el Flash Player",
	"Invert� los tastos O/X",
	"Invert� los tastos O/X (es necesario Reiniciar la VSH)",
	"Elimina hibernaci�n",
	"Hibernaci�n eliminada",
	"Ejecuta /PSP/GAME/RECOVERY/EBOOT.PBP",
	"Apaga la Consola",
	"Suspende la Consola",
	"Reinicia la Consola",
	"Reinicia la VSH",
	"Pagina",
	"Jap�n",
	"Am�rica",
	"Europa",
	"Corea",
	"Reino Unido",
	"M�xico",
	"Australia",
	"Hongkong",
	"Taiwan",
	"Rusia",
	"China",
	"Modalidad de Debug I",
	"Modalidad de Debug II",
};

u8 message_test_es[NELEMS(g_messages_es) == MSG_END ? 0 : -1];
