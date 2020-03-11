function setup() {
  createCanvas(800, 600);
}

function draw() {
  // put drawing code her
  //var kolory =['blue','black','red'];
  //var kolory2 = ['yellow','green'];
  //strokeWeight(10);
  //var krok = 180;
  //var szerkosc = 150;
  //for( i = 0; i < kolory.lenght; i++)
  //stroke(kolory[i]);
  //ellipse(100 + (i*krok))
  
  noFill()
  strokeWeight(20);
  stroke('#4a47a3');
  ellipse(100, 100, 150, 150);
  strokeWeight(20);
  stroke('#413c69');
  ellipse(260, 100, 150, 150);
  strokeWeight(20);
  stroke('#ad62aa');
  ellipse(420, 100, 150, 150);
  strokeWeight(20);
  stroke('#eab9c9');
  ellipse(160, 170, 150, 150);
  strokeWeight(20);
  stroke('#cc0e74');
  ellipse(320, 170, 150, 150);
}
