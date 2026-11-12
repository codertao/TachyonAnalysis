
/* sweep */

void BasePart_ErrNoAttach(int param_1,int param_2)

{
  undefined1 local_80 [128];
  
  str_sprintf(local_80,s__s__error_Part__d_has_no_attach_d_00532da0,param_1 + 0x14,
              *(undefined4 *)(param_2 + 0x44));
  SrvSend_TextSimple(local_80,0);
  return;
}

