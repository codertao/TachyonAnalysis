
/* sweep */

void NetSrv_InitPlayerEvents(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + 0x10 + DAT_006af7e8;
  *(int *)(param_1 + 0x10) = iVar2;
  puVar1 = (undefined4 *)Mem_AllocChecked(0x200,4,0,s_player_event_tag_buffer_0055f014,iVar2);
  *(undefined4 **)(param_1 + 0x7c) = puVar1;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  Pool_Init((Pool *)(param_1 + 0x18),DAT_006af798,DAT_006af79c + -0x14,0x55f000,
            *(uint *)(param_1 + 0x10));
  return;
}

