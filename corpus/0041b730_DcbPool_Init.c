
/* init a DCB pool (count,elemsize,name); server pools named Server_*_DCBS */

void DcbPool_Init(Pool *param_1,int param_2,int param_3,uint param_4,void *param_5)

{
  clr_bytes(param_1,0x28);
  param_1[1].mem = param_5;
  Pool_InitDefault(param_1,param_2,param_3,param_4);
  return;
}

