
#ifndef _TTS_IIC_H_
#define _TTS_IIC_H_

#include <include.h>

#define I2C_HOST_SDA_SET	0x01
#define I2C_HOST_SDA_CLR	0x02
#define I2C_HOST_SCL_SET	0x03
#define I2C_HOST_SCL_CLR	0x04
#define I2C_HOST_SDA_DAT	0x05

typedef uint8 (*I2C_HOST_IO_CONTROL)(uint8 ControlMode);


/*------------------------------------------------------------------------------
 Func: ����I2C����
------------------------------------------------------------------------------*/
void I2C_Start(I2C_HOST_IO_CONTROL I2C_IOCON);
/*------------------------------------------------------------------------------
 Func: ֹͣI2C���߿���
------------------------------------------------------------------------------*/
void I2C_Stop(I2C_HOST_IO_CONTROL I2C_IOCON);
/*------------------------------------------------------------------------------
 Func: �ͷ�I2C���߿���
------------------------------------------------------------------------------*/
void I2C_Drop(I2C_HOST_IO_CONTROL I2C_IOCON);
/*------------------------------------------------------------------------------
 Func: ����ACK�ź�
------------------------------------------------------------------------------*/
void I2C_SendAck(I2C_HOST_IO_CONTROL I2C_IOCON,uint8 Ack);
/*------------------------------------------------------------------------------
 Func: ��I2C����д���� 
 Time: 2010-7-20
 Ver.: V1.0
 Note:
------------------------------------------------------------------------------*/
uint8 I2C_SendBytes(I2C_HOST_IO_CONTROL I2C_IOCON,uint8 *TxBuffer,uint8 TxLenth);
/*------------------------------------------------------------------------------
 Func: ��I2C���߶����� 
 Time: 2010-7-20
 Ver.: V1.0
 Note:
------------------------------------------------------------------------------*/
uint8 I2C_RecvBytes(I2C_HOST_IO_CONTROL I2C_IOCON,uint8 *RxBuffer,uint8 RxLenth);
/*------------------------------------------------------------------------------
 Func: дI2C����
 Time: 2010-7-20
 Ver.: V1.0
 Note: return 0/����Ӧ   1/�������� 
------------------------------------------------------------------------------*/
uint8 I2C_WriteDatas(I2C_HOST_IO_CONTROL I2C_IOCON,uint8 Addr,uint8 *Cmd,uint8 CmdLen,uint8 *TxBuffer,uint8 TxLenth);
/*------------------------------------------------------------------------------
 Func: ��I2C����
 Time: 2010-7-20
 Ver.: V1.0
 Note: return 0/����Ӧ  1/����
------------------------------------------------------------------------------*/
uint8 I2C_ReadDatas(I2C_HOST_IO_CONTROL I2C_IOCON,uint8 Addr,uint8 *Cmd,uint8 CmdLen,uint8 *RxBuffer,uint8 RxLenth);

#endif