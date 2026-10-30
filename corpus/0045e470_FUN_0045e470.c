
void FUN_0045e470(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4,
                 short param_5,uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9
                 )

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)FUN_004b87d0();
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    *(short *)(puVar2 + 3) = (short)((uint)*param_2 >> 0x10);
    *(short *)((int)puVar2 + 0xe) = (short)((uint)param_2[1] >> 0x10);
    uVar1 = param_2[2];
    *(undefined1 *)((int)puVar2 + 0x16) = param_3;
    *(short *)(puVar2 + 4) = (short)((uint)uVar1 >> 0x10);
    *(short *)((int)puVar2 + 0x12) = (short)DAT_005897e4 - param_5;
    puVar2[6] = param_9;
    *(undefined1 *)((int)puVar2 + 0x17) = param_4;
    local_c = param_7;
    local_14 = param_6 | 0x61;
    local_18 = 1;
    local_10 = 0xfa00000;
    local_4 = param_8;
    FUN_004b87f0(puVar2,0x1002,0x1c,&local_18);
  }
  return;
}

