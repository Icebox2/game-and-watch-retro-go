/*
*********************************************************
*                Warning!!!!!!!                         *
*  This file must be saved with Windows 1252 Encoding   *
*********************************************************
*/

#pragma once
//Stand Spanish

//Core\Src\porting\gb\main_gb.c
#define s_Palette "Paleta"

//Core\Src\porting\nes\main_nes.c
//#define s_Palette "Palette" dul
#define s_Default "Por defecto"

//Core\Src\porting\odroid_overlay.c
#define s_Full 0x07
#define s_Fill 0x08

#define s_No_Cover "Sin imagen"

#define s_Yes "Si"
#define s_No "No"
#define s_PlsChose "Pregunta"
#define s_OK "OK"
#define s_Confirm "Confirmar"
#define s_Brightness "Brillo"
#define s_Volume "Volumen"
#define s_OptionsTit "Opciones"
#define s_FPS "FPS"
#define s_BUSY "BUSY"
#define s_Scaling "Escalado"
#define s_SCalingOff            "Off"
#define s_SCalingFit            "Fit"
#define s_SCalingFull "Total"
#define s_SCalingCustom         "Custom"
#define s_Filtering "Filtro"
#define s_FilteringNone "Ninguno"
#define s_FilteringOff          "Off"
#define s_FilteringSharp        "Sharp"
#define s_FilteringSoft         "Soft"
#define s_Speed "Velocidad"
#define s_Speed_Unit "x"
#define s_Save_Cont "Salvar y Continuar"
#define s_Save_Quit "Salvar y Quitar"
#define s_Reload "Recargar"
#define s_Options "Opciones"
#define s_Power_off "Apagar"
#define s_Quit_to_menu "Volver al menu"
#define s_Retro_Go_options "Retro-Go"

#define s_Theme_Title "UI Tema"
#define s_Theme_sList "Lista simple"
#define s_Theme_CoverV          "Coverflow V"
#define s_Theme_CoverH          "Coverflow H"
#define s_Theme_CoverLightV     "CoverLight V"
#define s_Theme_CoverLightH     "CoverLight H"

//Core\Src\retro-go\rg_emulators.c

#define s_Title_Date_Format               "%02d-%02d %s %02d:%02d:%02d"
#define fmt_Title_Date_Format(outstr,datefmt,day,month,weekday,hour,minutes,seconds) sprintf(outstr,datefmt,day,month,weekday,hour,minutes,seconds) 


#define s_File "Archivo"
#define s_Type "Tipo"
#define s_Size "Tama�o"
#define s_ImgSize "Tama�o Imagen"
#define s_Close "Cerrar"
#define s_GameProp "Propiedades"
#define s_Resume_game "Continuar juego"
#define s_New_game "Nuevo juego"
#define s_Del_favorite "Borrar favorito"
#define s_Add_favorite "A�adir favorito"
#define s_Delete_save "Borrar archivo guardado"
#define s_Confiem_del_save "�Borrar archivo guardado?"

//Core\Src\retro-go\rg_main.c
#define s_Second_Unit "s"
#define s_Version        "Ver.   :"
#define s_Author         "Por    :"
#define s_Author_        "       :"
#define s_UI_Mod         "UI Mod :"
#define s_Lang           "Espa�ol"
#define s_LangAuthor     "Icebox2#7858"
#define s_Debug_menu "Debug_menu"
#define s_Reset_settings "Resetear configuraci�n"
//#define s_Close "Cerrar"
#define s_Retro_Go "Sobre Retro-Go"
#define s_Confirm_Reset_settings "�Resetear configuraci�n?"

#define s_Flash_JEDEC_ID "Flash JEDEC ID"
#define s_Flash_Name "Flash Nombre"
#define s_Flash_SR "Flash SR"
#define s_Flash_CR "Flash CR"
#define s_Smallest_erase "Menor borrado"
#define s_DBGMCU_IDCODE "DBGMCU IDCODE"
#define s_Enable_DBGMCU_CK "Habilitar DBGMCU CK"
#define s_Disable_DBGMCU_CK "Deshabilitar DBGMCU CK"
//#define s_Close "Cerrar"
#define s_Debug_Title "Debug"
#define s_Idle_power_off "Apagado autom�tico"

#define s_Time "Hora"
#define s_Date "Fecha"
#define s_Time_Title "FECHA Y HORA"
#define s_Hour "Hora"
#define s_Minute "Minuto"
#define s_Second "Segundo"
#define s_Time_setup "Configurar hora"

#define s_Day "D�a"
#define s_Month "Mes"
#define s_Year "A�o"
#define s_Weekday "D�a de la semana"
#define s_Date_setup "Configurar fecha"

#define s_Weekday_Mon "Lun"
#define s_Weekday_Tue "Mar"
#define s_Weekday_Wed "Mie"
#define s_Weekday_Thu "Jue"
#define s_Weekday_Fri "Vie"
#define s_Weekday_Sat "Sab"
#define s_Weekday_Sun "Dom"

#define s_Date_Format               "%02d.%02d.20%02d %s"
#define fmtDate(outstr,datefmt,day,month,year,weekday) sprintf(outstr,datefmt,day,month,year,weekday) 
