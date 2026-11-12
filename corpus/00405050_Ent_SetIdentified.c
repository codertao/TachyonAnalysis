
/* posts {OBJ, code 10} */

void Ent_SetIdentified(int param_1,int param_2,int param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(char *)(param_2 + 0x1a) = (char)param_3;
  if (param_3 != 0) {
    Sped_BroadcastNamedMsg
              (*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18),*(undefined4 *)(param_1 + 0xd8),
               param_2,100,*(undefined4 *)(param_1 + 100));
    SrvSend_EntityStateOp(1,*(undefined4 *)(param_1 + 0x78),0,0,*(undefined4 *)(param_1 + 100),0);
    local_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
    local_8 = 0xffffffff;
    local_4 = 0xffffffff;
    local_18 = 1;
    local_10 = 10;
    local_c = 0;
    Mission_PostEvent(&local_18,*(undefined4 *)(param_1 + 100));
  }
  return;
}

