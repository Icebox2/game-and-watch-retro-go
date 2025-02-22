#include "main.h"
#include "rg_rtc.h"
#include "rg_i18n.h"
#include "stm32h7xx_hal.h"
#include <time.h>


RTC_TimeTypeDef GW_currentTime = {0};
RTC_DateTypeDef GW_currentDate = {0};
const char * GW_RTC_Weekday[] = {s_Weekday_Mon, s_Weekday_Tue, s_Weekday_Wed, s_Weekday_Thu, s_Weekday_Fri, s_Weekday_Sat, s_Weekday_Sun};

// Getters
uint8_t GW_GetCurrentHour(void) {

    // Get time. According to STM docs, both functions need to be called at once.
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    return GW_currentTime.Hours;

}
uint8_t GW_GetCurrentMinute(void) {

    // Get time. According to STM docs, both functions need to be called at once.
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    return GW_currentTime.Minutes;
}
uint8_t GW_GetCurrentSecond(void) {

    // Get time. According to STM docs, both functions need to be called at once.
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    return GW_currentTime.Seconds;
}

uint8_t GW_GetCurrentMonth(void) {

    // Get time. According to STM docs, both functions need to be called at once.
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    return GW_currentDate.Month;
}
uint8_t GW_GetCurrentDay(void) {

    // Get time. According to STM docs, both functions need to be called at once.
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    return GW_currentDate.Date;
}

uint8_t GW_GetCurrentWeekday(void) {

    // Get time. According to STM docs, both functions need to be called at once.
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    return GW_currentDate.WeekDay;
}
uint8_t GW_GetCurrentYear(void) {

    // Get time. According to STM docs, both functions need to be called at once.
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    return GW_currentDate.Year;
}

// Setters
void GW_SetCurrentHour(const uint8_t hour) {

    // Update time before we can set it
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    // Set time
    GW_currentTime.Hours = hour;
    if (HAL_RTC_SetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN) != HAL_OK)
    {
        Error_Handler();
    }
}
void GW_SetCurrentMinute(const uint8_t minute) {

    // Update time before we can set it
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    // Set time
    GW_currentTime.Minutes = minute;
    if (HAL_RTC_SetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN) != HAL_OK)
    {
        Error_Handler();
    }
}

void GW_SetCurrentSecond(const uint8_t second) {

    // Update time before we can set it
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    // Set time
    GW_currentTime.Seconds = second;
    if (HAL_RTC_SetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN) != HAL_OK)
    {
        Error_Handler();
    }
}

void GW_SetCurrentMonth(const uint8_t month) {

    // Update time before we can set it
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    // Set date
    GW_currentDate.Month = month;

    if (HAL_RTC_SetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN) != HAL_OK)
    {
        Error_Handler();
    }
}
void GW_SetCurrentDay(const uint8_t day) {

    // Update time before we can set it
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    // Set date
    GW_currentDate.Date = day;

    if (HAL_RTC_SetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN) != HAL_OK)
    {
        Error_Handler();
    }
}

void GW_SetCurrentWeekday(const uint8_t weekday) {

    // Update time before we can set it
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    // Set date
    GW_currentDate.WeekDay = weekday;

    if (HAL_RTC_SetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN) != HAL_OK)
    {
        Error_Handler();
    }
}
void GW_SetCurrentYear(const uint8_t year) {

    // Update time before we can set it
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    // Set date
    GW_currentDate.Year = year;

    if (HAL_RTC_SetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN) != HAL_OK)
    {
        Error_Handler();
    }
}

// Callbacks for UI purposes
bool hour_update_cb(odroid_dialog_choice_t *option, odroid_dialog_event_t event, uint32_t repeat) {

    int8_t hour = GW_GetCurrentHour();
    int8_t min = 0;
    int8_t max = 23;

    if (event == ODROID_DIALOG_PREV && hour > min) {
        GW_SetCurrentHour(--hour);
    }

    if (event == ODROID_DIALOG_NEXT && hour < max) {
        GW_SetCurrentHour(++hour);
    }

    sprintf(option->value, "%02d", hour);
    return event == ODROID_DIALOG_ENTER;
    return false;

}
bool minute_update_cb(odroid_dialog_choice_t *option, odroid_dialog_event_t event, uint32_t repeat) { 
    
    int8_t minute = GW_GetCurrentMinute();
    int8_t min = 0;
    int8_t max = 59;

    if (event == ODROID_DIALOG_PREV && minute > min) {
        GW_SetCurrentMinute(--minute);
    }

    if (event == ODROID_DIALOG_NEXT && minute < max) {
        GW_SetCurrentMinute(++minute);
    }

    sprintf(option->value, "%02d", minute);
    return event == ODROID_DIALOG_ENTER;
    return false;

}
bool second_update_cb(odroid_dialog_choice_t *option, odroid_dialog_event_t event, uint32_t repeat) { 
    
    int8_t second = GW_GetCurrentSecond();
    int8_t min = 0;
    int8_t max = 59;

    if (event == ODROID_DIALOG_PREV && second > min) {
        GW_SetCurrentSecond(--second);
    }

    if (event == ODROID_DIALOG_NEXT && second < max) {
        GW_SetCurrentSecond(++second);
    }

    sprintf(option->value, "%02d", second);
    return event == ODROID_DIALOG_ENTER;
    return false;

}

bool month_update_cb(odroid_dialog_choice_t *option, odroid_dialog_event_t event, uint32_t repeat) { 
        
    int8_t month = GW_GetCurrentMonth();
    int8_t min = 1;
    int8_t max = 12;

    if (event == ODROID_DIALOG_PREV && month > min) {
        GW_SetCurrentMonth(--month);
    }

    if (event == ODROID_DIALOG_NEXT && month < max) {
        GW_SetCurrentMonth(++month);
    }

    sprintf(option->value, "%02d", month);
    return event == ODROID_DIALOG_ENTER;
    return false;
    
}
bool day_update_cb(odroid_dialog_choice_t *option, odroid_dialog_event_t event, uint32_t repeat) { 
        
    int8_t day = GW_GetCurrentDay();
    int8_t min = 1;
    int8_t max = 31;

    if (event == ODROID_DIALOG_PREV && day > min) {
        GW_SetCurrentDay(--day);
    }

    if (event == ODROID_DIALOG_NEXT && day < max) {
        GW_SetCurrentDay(++day);
    }

    sprintf(option->value, "%02d", day);
    return event == ODROID_DIALOG_ENTER;
    return false;

}

time_t GW_GetUnixTime(void) {
    // Function to return Unix timestamp since 1st Jan 1970.
    // The time is returned as an 64-bit value, but only the top 32-bits are populated.
    
    time_t timestamp;
    struct tm timeStruct;

    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    timeStruct.tm_year = GW_currentDate.Year + 100;  // tm_year base is 1900, RTC can only save 0 - 99, so bump to 2000.
    timeStruct.tm_mday = GW_currentDate.Date;
    timeStruct.tm_mon  = GW_currentDate.Month - 1;

    timeStruct.tm_hour = GW_currentTime.Hours;
    timeStruct.tm_min  = GW_currentTime.Minutes;
    timeStruct.tm_sec  = GW_currentTime.Seconds;

    timestamp = mktime(&timeStruct);

    return timestamp;

}

bool weekday_update_cb(odroid_dialog_choice_t *option, odroid_dialog_event_t event, uint32_t repeat) { 
                
    int8_t weekday = GW_GetCurrentWeekday();
    int8_t min = 1;
    int8_t max = 7;

    if (event == ODROID_DIALOG_PREV && weekday > min) {
        GW_SetCurrentWeekday(--weekday);
    }

    if (event == ODROID_DIALOG_NEXT && weekday < max) {
        GW_SetCurrentWeekday(++weekday);
    }

    sprintf(option->value, "%s", (char *) GW_RTC_Weekday[weekday-1]);
    return event == ODROID_DIALOG_ENTER;
    return false;
    
}
bool year_update_cb(odroid_dialog_choice_t *option, odroid_dialog_event_t event, uint32_t repeat) { 
            
    int8_t year = GW_GetCurrentYear();
    int8_t min = 0;
    int8_t max = 99;

    if (event == ODROID_DIALOG_PREV && year > min) {
        GW_SetCurrentYear(--year);
    }

    if (event == ODROID_DIALOG_NEXT && year < max) {
        GW_SetCurrentYear(++year);
    }

    sprintf(option->value, "20%02d", year);
    return event == ODROID_DIALOG_ENTER;
    return false;
    
}

bool time_display_cb(odroid_dialog_choice_t *option, odroid_dialog_event_t event, uint32_t repeat) {
    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);

    sprintf(option->value, "%02d:%02d:%02d", GW_currentTime.Hours, GW_currentTime.Minutes, GW_currentTime.Seconds);
    return event == ODROID_DIALOG_ENTER;
    return false;    
}
bool date_display_cb(odroid_dialog_choice_t *option, odroid_dialog_event_t event, uint32_t repeat) {

    HAL_RTC_GetTime(&hrtc, &GW_currentTime, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &GW_currentDate, RTC_FORMAT_BIN);
    
    fmtDate(option->value, s_Date_Format, GW_currentDate.Date, GW_currentDate.Month, GW_currentDate.Year, (char *) GW_RTC_Weekday[GW_currentDate.WeekDay-1]);
    return event == ODROID_DIALOG_ENTER;
    return false;
}