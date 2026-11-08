
/* 0x2027 {hit pos, capship root id, part id u16, weapon, kind, scale>>2} */

void NetCli_SendPartHitReport
               (undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)NetCli_AllocEvent();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
    *(undefined1 *)((int)puVar1 + 0x12) = param_3;
    *(undefined1 *)((int)puVar1 + 0x13) = param_4;
    *puVar1 = DAT_005653cc;
    puVar1[1] = DAT_005653d0;
    puVar1[2] = DAT_005653d4;
    *(undefined2 *)(puVar1 + 4) = param_2;
    *(short *)(puVar1 + 5) = (short)(DAT_00565400 >> 2);
    NetCli_QueueEvent(puVar1,0x2027,0x16,4);
  }
  return;
}

