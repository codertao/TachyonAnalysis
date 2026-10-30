
/* init a DCB pool (count,elemsize,name); server pools named Server_*_DCBS */

void DcbPool_Init(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0048e380(param_1,0x28);
  *(undefined4 *)(param_1 + 0x24) = param_5;
  FUN_004b7840(param_1,param_2,param_3,param_4);
  return;
}

