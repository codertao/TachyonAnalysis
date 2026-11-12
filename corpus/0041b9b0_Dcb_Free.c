
/* sweep: Pool_Free(*ent, ent) */

void Dcb_Free(undefined4 *param_1)

{
  Pool_Free((Pool *)*param_1,param_1);
  return;
}

