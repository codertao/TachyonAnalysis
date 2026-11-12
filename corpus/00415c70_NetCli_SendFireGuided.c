
/* 0x2004 {pos, angles, f16 offset, client frame, target id, lock flag, weapon, slot} */

void NetCli_SendFireGuided
               (undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)NetCli_AllocEvent();
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    *(short *)(puVar2 + 3) = (short)((uint)*param_2 >> 0x10);
    *(short *)((int)puVar2 + 0xe) = (short)((uint)param_2[1] >> 0x10);
    uVar1 = param_2[2];
    *(undefined1 *)(puVar2 + 8) = param_3;
    *(short *)(puVar2 + 4) = (short)((uint)uVar1 >> 0x10);
    puVar2[7] = param_6;
    puVar2[6] = DAT_005b3304;
    *(undefined1 *)((int)puVar2 + 0x21) = param_4;
    *(undefined1 *)((int)puVar2 + 0x22) = DAT_005b2140;
    *(undefined1 *)((int)puVar2 + 0x23) = param_7;
    f16_EncodeVec(param_5,(int)puVar2 + 0x12);
    NetCli_QueueEvent(puVar2,0x2004,0x24,0x800);
  }
  return;
}

