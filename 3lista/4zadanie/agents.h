struct agent{
	int x;
	int y;
};

typedef struct agent *agent;

struct agent newagent(int x, int y);
void north(agent);
void south(agent);
void east(agent);
void west(agent);
double distance(struct agent a1, struct agent a2);
