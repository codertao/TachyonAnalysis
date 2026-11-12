
/* sweep */

void CapPart_InitReplica(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  *(uint *)(param_1 + 0xe4) = (uint)*(ushort *)(param_3 + 8);
  puVar1 = (undefined4 *)
           ((uint)*(ushort *)(param_3 + 6) * 0x80 + *(int *)(*(int *)(param_2 + 0x94) + 4));
  *(undefined4 *)(param_1 + 0x58) = *puVar1;
  CapPartReplica_Init(param_1,puVar1);
  puVar1[0x1f] = param_1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined1 **)(param_1 + 0x70) = &LAB_0040acb0;
  DAT_005b9810 = param_1;
  if (*(int *)(param_1 + 200) != 0) {
    *(code **)(param_1 + 0x68) = Starbase_FreeParts;
  }
  return;
}

