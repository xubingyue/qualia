/*
 * Trainer.h
 *
 * (c) 2013 Sofian Audry -- info(@)sofianaudry(.)com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRAINER_H_
#define TRAINER_H_

#include <qualia/learning/DataSet.h>
#include <qualia/learning/Function.h>

class Trainer {
public:
  Function* function;
  int nEpisodes;

  Trainer(Function* function);
  virtual ~Trainer();

  virtual void init();

  virtual void train(DataSet* data, int maxEpisodes=0);
  virtual void trainEpisode(DataSet* data);
  virtual void trainExample(real* example) = 0;

  virtual bool stop() { return false; }
};

#endif /* TRAINER_H_ */