
void Gfx_DrawTriangle(void *param_1,void *param_2,void *param_3,void *param_4,uint *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint color;
  int iVar4;
  
  if (DAT_00604494 == 0) {
    if ((DAT_004e4a28 & 8) == 0) {
      color = param_5[1] >> 8;
    }
    else {
      color = *param_5;
    }
    call_Sw_DrawTriangle(param_1,param_2,param_3,param_4,color);
    return;
  }
  if (*(int *)(DAT_00604504 + 0x1c) == 0) {
    if ((DAT_004e4a28 & 8) != 0) {
      iVar4 = DAT_004e4a34;
      if ((DAT_004e4a28 & 0x2200000) != 0) {
        iVar4 = DAT_004e4a2c << 0x18;
      }
      (*DAT_00604554)(param_1,param_2,param_3,param_5,DAT_004e4a28,iVar4);
      return;
    }
    puVar1 = (undefined1 *)((int)param_5 + 7);
    puVar2 = (undefined1 *)((int)param_5 + 6);
    puVar3 = (undefined1 *)((int)param_5 + 5);
    param_5 = (uint *)(uint)CONCAT12(*puVar3,CONCAT11(*puVar2,*puVar1));
    (*DAT_00604550)(param_1,param_2,param_3,param_5,DAT_004e4a28,DAT_004e4a34);
  }
  return;
}

