
/* 0x2001 {pos, angles, client frame, weapon, slot, ?} */

void NetCli_SendFire(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4,
                    undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)NetCli_AllocEvent();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    *(short *)(puVar1 + 3) = (short)((uint)*param_2 >> 0x10);
    *(short *)((int)puVar1 + 0xe) = (short)((uint)param_2[1] >> 0x10);
    *(short *)(puVar1 + 4) = (short)((uint)param_2[2] >> 0x10);
    *(undefined1 *)((int)puVar1 + 0x16) = param_3;
    *(undefined2 *)((int)puVar1 + 0x12) = (undefined2)DAT_005b3304;
    *(undefined1 *)((int)puVar1 + 0x17) = param_4;
    *(undefined1 *)(puVar1 + 5) = param_5;
    NetCli_QueueEvent(puVar1,0x2001,0x1c,0x800);
  }
  return;
}

