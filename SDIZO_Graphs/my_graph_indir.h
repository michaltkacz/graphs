﻿#pragma once
#include "graph_im_indir.h"
#include "graph_al_indir.h"
#include "my_graph.h"

class my_graph_indir : public my_graph
{
public:
	my_graph_indir();
	~my_graph_indir();

	void init(int v, int e) override;

	void remove() override;

	void random() override;

	void print_graph() override;
	void print_parameters() override;

	bool exists() override;
	bool is_connected() override;

protected:
	void add_edge(int v_start, int v_end, int e_weight) override;

private:
	graph_im_indir* g_im_indir_;
	graph_al_indir* g_al_indir_;
};