
void FUN_00415810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined2 param_7)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_004b8fb0();
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar1 + 0x12) = param_4;
    *puVar1 = param_5;
    puVar1[1] = param_6;
    *(undefined4 *)(puVar1 + 0xe) = param_3;
    *(undefined2 *)(puVar1 + 0x16) = param_7;
    FUN_0048e8f0(param_1,puVar1 + 2);
    FUN_0048e8f0(param_2,puVar1 + 8);
    FUN_004b8fd0(puVar1,0x2017,0x18,0x800);
  }
  return;
}

