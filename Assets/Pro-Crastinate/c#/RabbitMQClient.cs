// ------------------------------------------------------------------------------
//  <autogenerated>
//      This code was generated by a tool.
//      Mono Runtime Version: 4.0.30319.1
// 
//      Changes to this file may cause incorrect behavior and will be lost if 
//      the code is regenerated.
//  </autogenerated>
// ------------------------------------------------------------------------------
using System;
using System.Text;
using UnityEngine;
using System.Collections;
//using RabbitMQ.Client;
//using RabbitMQ.Client.Events;

namespace RMX {
	public class RabbitMQClient {

		public static void Main()
		{
//			var factory = new ConnectionFactory () { HostName = "localhost" };
//			using (var connection = factory.CreateConnection())
//			using (var channel = connection.CreateModel()) {
//				channel.QueueDeclare (queue: "hello",
//                                      passive: true,
//				                     durable: false,
//				                     exclusive: false,
//				                     autoDelete: false,
//                                     nowait: false,
//				                     arguments: null);
//				
//                var consumer = new EventingBasicConsumer (); //withchannel?
//
//				consumer.Received += (model, ea) =>
//				{
//					var body = ea.Body;
//					var message = Encoding.UTF8.GetString (body);
//					Console.WriteLine (" [x] Received {0}", message);
//				};
//				channel.BasicConsume (queue: "hello",
//				                     noAck: true,
//				                     filter: null,
//                                      consumer: consumer);
//				
//				Console.WriteLine (" Press [enter] to exit.");
//				Console.ReadLine ();
			}
		}
}
