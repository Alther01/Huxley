#include <stdio.h>
#include <math.h>

void verify(double life_c, double damage_c, double life_b, double damage_b, int count)
{
	if (life_b <= 0)
	{
		printf("Clodes\n");

		return;
	}

	if (life_c <= 0)
	{
		printf("Bezaliel\n");

		return;
	}

	double aux_c = ceil(life_b / damage_c);
	double aux_b = ceil(life_c / damage_b);

	if (aux_c <= aux_b)
	{
		if (count % 2 == 0)
		{
			life_b -= damage_c;

			//printf("LIFE B: %d\n", life_b);

			verify(life_c, damage_c, life_b, damage_b, count + 1);
		}

		else
		{
			life_c -= damage_b;
			//printf("LIFE C: %d\n", life_c);

			verify(life_c, damage_c, life_b, damage_b, count + 1);
		}
	}

	if (aux_c > aux_b)
	{
		if (count % 2 == 0)
		{
			if (damage_c >= life_b)
			{
				life_b -= damage_c;

				verify(life_c, damage_c, life_b, damage_b, count + 1);
			}
			else
			{
				damage_c += 50;
				//printf("DAMAGE C: %d\n", damage_c);

				verify(life_c, damage_c, life_b, damage_b, count + 1);
			}
		}

		else
		{
			life_c -= damage_b;
			//printf("LIFE C: %d\n", life_c);

			verify(life_c, damage_c, life_b, damage_b, count + 1);
		}
	}
}

void result(int q_battle, double life_c, double damage_c, double life_b, double damage_b, int count)
{
	if (count <= q_battle)
	{
		scanf("%lf %lf %lf %lf", &life_c, &life_b, &damage_c, &damage_b);

		verify(life_c, damage_c, life_b, damage_b, 0);

		result(q_battle, 0, 0, 0, 0, count + 1);
	}

	else
	{
		return;
	}
}

int main()
{
	int q_battle;
	scanf("%d", &q_battle);

	result(q_battle, 0, 0, 0, 0, 1);

	return 0;
}
