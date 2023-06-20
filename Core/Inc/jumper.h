/*
 * jumper.h
 *
 *  Created on: 20 Jun 2023
 *      Author: ImedHadef
 */

#ifndef INC_JUMPER_H_
#define INC_JUMPER_H_

/* Includes ------------------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

#define FW_LIMIT 0x08008000
#define APP_META_DATA_ADD FW_LIMIT
#define APP_REGION_ROM_START (APP_META_DATA_ADD + 0x200)

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void jump_to_application(void);

#endif /* INC_JUMPER_H_ */
