
void FUN_004ac2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,uint param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar3 = param_5;
  if (DAT_00604494 != 0) {
    if (*(int *)(DAT_00604504 + 0x1c) == 0) {
      if ((param_6 & 8) != 0) {
        if ((param_6 & 0x2200000) == 0) {
          uVar4 = DAT_004e4a34;
          if ((param_6 & 0x20000) != 0) {
            uVar4 = param_5[1];
            uVar4 = ((uVar4 & 0xfe0000) >> 8 | (uVar4 & 0xfe00) << 8 | (uVar4 & 0xfe) << 0x18) >> 8;
            DAT_004e4a34 = uVar4;
          }
        }
        else {
          uVar4 = DAT_004e4a2c << 0x18;
        }
        (*DAT_00604554)(param_1,param_2,param_3,param_5,param_6,uVar4);
        return;
      }
      puVar1 = (undefined1 *)((int)param_5 + 7);
      puVar2 = (undefined1 *)((int)param_5 + 6);
      param_5 = (undefined4 *)
                CONCAT13(*(undefined1 *)(puVar3 + 1),
                         CONCAT12(*(undefined1 *)((int)puVar3 + 5),CONCAT11(*puVar2,*puVar1)));
      (*DAT_00604550)(param_1,param_2,param_3,param_5,param_6,DAT_004e4a34);
    }
    return;
  }
  if ((DAT_004e4a28 & 8) == 0) {
    if (DAT_00604488 != 0x20) {
      FUN_004e4eea(param_1,param_2,param_3,param_4,param_5[1],param_6);
      return;
    }
    FUN_004e4eea(param_1,param_2,param_3,param_4,(uint)param_5[1] >> 8,param_6);
    return;
  }
  if ((DAT_004e4a28 & 0x20000) != 0) {
    DAT_004e4a2c = param_5[1];
  }
  FUN_004e4eea(param_1,param_2,param_3,param_4,*param_5,param_6);
  return;
}

